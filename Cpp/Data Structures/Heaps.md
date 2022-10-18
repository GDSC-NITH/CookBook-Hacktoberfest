
## Data structure

- heaps can be implemented with arrays: for 0-based index
```c
int parent(int i){return (i-1)>>1;}
int left(int i){return (i<<1)+1;}
int right(int i){return i<<1+2;}
```
- heaps are of two types: max-heap & min-heap
- max-heap property: `A[parent(i)] >= A[i]` min-heap property: `A[parent(i)] <= A[i]`
- heaps provide in-place, unstable sorting

## Basic Procedures for heaps

- **MAX_HEAPIFY**: if a node violates max-heap property but its children are max-heaps, then this procedure makes the node float down to its appropriate position with $\mathcal{O}(\text{height of that node})$ cost

```cpp
void max_heapify(vector<int> &arr, int i){
	int left = left(i), right = left + 1, largest = i;
	// which is largest of these three: i, left(i), right(i)
	if(left < heap_size && arr[left] > arr[i]) largest = left;
	if(right < heap_size && arr[right] > arr[largest]) largest = right;
	if(largest != i){
		swap(arr[i], arr[largest]);
		max_heapify(arr, largest);
	}
}
```

- **BUILD\_MAX\_HEAP**: builds the heap from array
    - since second half of the array contain leaves of heap, which are already one-element heaps so we call `max_heapify` on rest element in down-up manner(first height 1 elements, then height 2 element and so on)
    - for 0-indexed array, parent of last element `parent(n-1)` is `(n-1)/2`,  the non-zero height sub-heap is at index `(n-1)/2`. So we can `max_heapify` nodes from `(n-1)/2` to `0`

```cpp
void build_max_heap(vector<int> &arr){
	for(int i = arr.size()/2; i>=0; i--) 
		max_heapify(arr, i);
}
```

### Time complexity of BUILD\_MAX\_HEAP
- time complexity will be = sum of costs of all MAX_HEAPIFY function calls = sum of $\mathcal{O}$(height of node) for all nodes
-  since $n/2$ of those nodes are leaf nodes(so have zero height), they can be ignored  
- two major points:
	- n-element heap has height of $\lfloor \lg n \rfloor$
	- n-element heap has at most $\lceil n/2^{h+1} \rceil$ elements with height $h$, how:
	-	no of nodes with $\lfloor \lg n \rfloor$ height = 1  
	-	no of nodes with $\lfloor\lg{n}\rfloor-1$ height = 2  
	-	no of nodes with $\lfloor\lg{n}\rfloor-i$ height = $2^{i}$  
	-	no of nodes with $h$ height = $2^{\lfloor \lg n \rfloor - h} = 2^{(\lfloor \lg n \rfloor+1) - (h+1)}$  

$\text{cost}=  \sum\limits_{h=0}^{\lfloor lgn \rfloor} \lceil{ \frac{n}{2^{h+1}} \rceil}\mathcal{O} (h)$

$= \mathcal{O}( n \sum\limits_{h=0}^{\lfloor lgn \rfloor} {\frac{h}{2^h}} )$

$\text{here } \sum\limits_{h=0}^{\infty}  {\frac{h}{2^h}} = 2 \text{ because } \sum\limits_{k=0}^{\infty}  {kx^k} = \frac{x}{(1-x)^2} \text{ for } |x| \lt 1$

$\text{so the cost is} \mathcal{O}(n)$


- **HEAP_SORT**:do this (heap_size-1) times: 
extract max element, put it in the last position of array and reduce heap_size by 1; cost is $\mathcal{O} (n\lg n)$

```cpp
void heap_sort(vector<int> &arr){
	int heap_size = arr.size();
	build_max_heap(arr);
	for(int i = arr.size()-1; i>0; i--){
		swap(arr[0], arr[i]);
		heap_size--;
		max_heapify(arr, 0);
	}
}
```

## Priority Queue with heaps

- priority_queue contains key-value pairs and supports the following operations:
    - `INSERT(x)` insert element x in it
    - `MAX()` return element of it with largest key
    - `EXTRACT_MAX()` return and remove element of it with largest key
    - `INCREASE_KEY(x,k)` set element x's key equal to k assuming k is not less than x's current key
- we can chanage the element type from `int` to `pair<int,pointer_to_stored_object>` to have key-value pairs instead of just keys; pointer will make swapping element indexes easier(sizeof(ptr) = 8, sizeof(object) can be > 8)

```cpp
int heap_max(vector<int> &arr){	//O(1)
    return arr[0];
}
int heap_extract_max(vector<int> &arr){ //O(lgn)
	if(heap_size == 0) exit(1);//bad operation
	int max = arr[0];
	arr[0] = arr[heap_size-1];
	--heap_size;
	max_heapify(arr,0);
	return max;
}
int parent(int i){ return (i+1)>>1 - 1; }
void heap_increase_key(vector<int> &arr, int i, int key){ //O(lgn)
	if(key < arr[i]) exit(1);//bad operation
	arr[i] = key;
	//bubble up the element to appropriate location
	while(i > 0 && arr[parent(i)] < arr[i]){
		swap(arr[i], arr[parent(i)]);
		i = parent(i);
	}
}
void heap_insert(vector<int> &arr, int key){
	heap_size++;
	arr.push_back(INT_MIN);	//put at index (heap_size - 1)
	heap_increase_key(arr, heap_size-1, key);
}
```

- STL

```cpp
priority_queue<typename _T, 
               typename _seq = vector<_T>, 
               typename _compare = less<_seq::value_type>>
//max heap
priority_queue<int>
//min heap
priority_queue<int, vector<int>, greater<int>>
```
