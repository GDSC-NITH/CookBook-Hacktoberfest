# Segment Trees

- require about $\sim 4n$ space for array of size $n$
    
- the time complexity of this construction is $\mathcal{O}(n)$, assuming that the merge operation is constant time(recursively building it)
    
- sum queries three cases
    
    - the current segment is same as query segment
    - the query segment completely fall in either left or right child segment
    - query segment intersects with both children segments
    - why sum queries are $\mathcal{O}(\log n)$:
    
    ```mermaid
    %%{init: {'theme': 'base', 'themeVariables': { 'primaryColor': '#ffff33', 'background': '#ff0000','titleColor':'#ffffff','nodeBorder':'#000000'}}}%%
    flowchart TD;
        a(left)
        b(mid1)
        bII(mid2)
        c(right)
        a --> a1
        a --> a2
        b --> b1
        b --> b2
        c --> c1
        c --> c2
        bII --> b21
        bII --> b22
    
    
    ```
    
    since the range of sum queried will cover up the mid completely, it'll just return the result and won't do a recursive call. But the left and right can do recursive call. So even if there are four vertices in current level there will be <4 in next level. Hence proved by induction. So at most $4\log n$ steps
    
- update queries are also $\mathcal{O}(\log n)$
    
- basic implementation
    

```cpp
class SegmentTree{
private:
    int n, maxN, segTree[4*maxN];
    inline int leftChild(int indx){ return indx*2; }
    inline int rightChild(int indx){ return indx*2+1; }
    void build(vector<int> arr, int tIndex=1, int tLeft=0, int tRight=n-1) {
        if (tLeft == tRight) {  //in terminal node just do it
            segTree[tIndex] = arr[tLeft];
        } else {    //build the left and right child recursively and using them update the current node
            int tMid = (tLeft + tRight) / 2;
            build(arr, leftChild(tIndex), tLeft, tMid);
            build(arr, rightChild(tIndex), tMid+1, tRight);
            segTree[tIndex] = segTree[leftChild(tIndex)] + segTree[rightChild(tIndex)];
        }
    }
public:
    SegmentTree(vector<int> arr, int pMaxN = -1){
        n = arr.size();
        maxN = (pMaxN == -1)? n : pMaxN;
        build(arr);
    }
    int sumQuery(int tIndex, int tLeft, int tRight, int qLeft, int qRight) {
        if (qLeft > qRight) 
            return 0;
        if (qLeft == tLeft && qRight == tRight) {   //tree segment same as query segment
            return segTree[tIndex];
        }
        //else just do the recursive thing
        int tMid = (tLeft + tRight) / 2;
        return sumQuery(leftChild(tIndex), tLeft, tMid, qLeft, min(qRight, tMid))
            + sumQuery(rightChild(tIndex), tMid+1, tRight, max(qLeft, tMid+1), qRight);
    }
    void updateQuery(int tIndex, int tLeft, int tRight, int arrPos, int newVal) {
        if (tLeft == tRight) {
            segTree[tIndex] = newVal;//reached to the terminal
        } else {
            int tMid = (tLeft + tRight) / 2;
            if (arrPos <= tMid)
                update(leftChild(tIndex), tLeft, tMid, arrPos, newVal);
            else
                update(rightChild(tIndex), tMid+1, tRight, arrPos, newVal);
            segTree[tIndex] = segTree[tIndex*2] + segTree[tIndex*2+1];
        }
    }
}
```

### memory efficient implementation

- [video tutorial](https://youtu.be/Oq2E2yGadnU)

```cpp
class SegmentTree {
public:
    SegmentTree(int count) {
        n = count;
        data = vector<int>(2 * n, 0);
    }
    SegmentTree(vector<int> const &values) {
        n = values.size();
        data = vector<int>(2 * n);
        copy(values.begin(), values.end(), data.begin() + n);
        for (int idx = n - 1; idx > 0; idx--)
            data[idx] = min(data[idx * 2], data[idx * 2 + 1]);//action
    }
    void update(int idx, int value) {
        idx += n;
        data[idx] = value;
        while (idx > 1) {
            idx /= 2;
            data[idx] = min(data[2 * idx], data[2 * idx + 1]);//action
        }
    }
    int minimum(int left, int right) { // [left, right)
        int ret = INT_MAX;
        left += n;
        right += n;
        while (left < right) {
            if (left & 1) ret = min(ret, data[left++]);//action
            if (right & 1) ret = min(ret, data[--right]);//action
            left >>= 1;
            right >>= 1;
        }
        return ret;
    }
private:
    int n;
    std::vector<int> data;
};
```

- in place of action we can subtitute many things like sum, max, gcd, lcm etc.:
    
    - finding max and number of times it appears: the action would be
    
    ```cpp
    pair<int, int> combine(pair<int, int> a, pair<int, int> b) {
        if (a.first > b.first) 
            return a;
        if (b.first > a.first)
            return b;
        return make_pair(a.first, a.second + b.second);
    }
    ```
    
    - finding the $k^{th}$ zero
    
    ```cpp
    int find_kth(int v, int tl, int tr, int k) {
        if (k > t[v]) return -1;
        if (tl == tr) return tl;
    
        int tm = (tl + tr) / 2;
        if (t[v*2] >= k) return find_kth(v*2, tl, tm, k);
        else return find_kth(v*2+1, tm+1, tr, k - t[v*2]);
    }
    ```
    
    - for x, find smallest index i such that the sum of the first i elements of the array is >=x: same idea as kth zero
    - for given x and range $[l,r]$ find smallest i such that $a[i]\gt x$
    
    ```cpp
    int get_first(int v, int lv, int rv, int l, int r, int x) {
        if(lv > r || rv < l) return -1;
        if(l <= lv && rv <= r) {
            if(t[v] <= x) return -1;
            while(lv != rv) {
                int mid = lv + (rv-lv)/2;
                if(t[2*v] > x) {
                    v = 2*v;
                    rv = mid;
                }else {
                    v = 2*v+1;
                    lv = mid+1;
                }
            }
            return lv;
        }
    
        int mid = lv + (rv-lv)/2;
        int rs = get_first(2*v, lv, mid, l, r, x);
        if(rs != -1) return rs;
        return get_first(2*v+1, mid+1, rv, l ,r, x);
    }
    ```
    
    - etc.etc.
