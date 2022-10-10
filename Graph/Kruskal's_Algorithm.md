# Kruskal's Algorithm
## **Minimum Spanning Tree**

**Kruskal's**  algorithm is use to figure out *MST* of given Graph



## **Algorithm**

### How many edges does a minimum spanning tree has? 
A minimum spanning tree has (V – 1) edges where V is the number of vertices in the given graph. 

![graph](https://media.geeksforgeeks.org/wp-content/uploads/20210727035309/UntitledDiagram92.png)

<br>

**Step 1** Sort all the edges in non-decreasing order of their weight. 

**Step 2** Pick the smallest edge. Check if it forms a cycle with the spanning tree formed so far. If cycle is not formed, include this edge. Else, discard it.

**Step 3** Repeat *step#2* until there are (V-1) edges in the spanning tree.

Step #2 uses the [**Union-Find algorithm**](https://www.geeksforgeeks.org/union-find/) to detect cycles. 

(short note )=> **Union Find Algorithm** is a way of finding out that the edge you are going to use for you MST is introducing cycle or not by checking the 2 side vertices that either both are of same component or of different.

<br>

***

## **SAMPLE**

<br>

The code for the Kruskal's Algorithm with an example is shown below. The code has been simplified so that we can focus on the algorithm rather than other details.

### **C++ Code**

```cpp
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// DSU data structure
// path compression + rank by union

class DSU {
	int* parent;
	int* rank;

public:
	DSU(int n)
	{
		parent = new int[n];
		rank = new int[n];

		for (int i = 0; i < n; i++) {
			parent[i] = -1;
			rank[i] = 1;
		}
	}

	// Find function
	int find(int i)
	{
		if (parent[i] == -1)
			return i;

		return parent[i] = find(parent[i]);
	}

	// Union function
	void unite(int x, int y)
	{
		int s1 = find(x);
		int s2 = find(y);

		if (s1 != s2) {
			if (rank[s1] < rank[s2]) {
				parent[s1] = s2;
				rank[s2] += rank[s1];
			}
			else {
				parent[s2] = s1;
				rank[s1] += rank[s2];
			}
		}
	}
};

class Graph {
	vector<vector<int> > edgelist;
	int V;

public:
	Graph(int V) { this->V = V; }

	void addEdge(int x, int y, int w)
	{
		edgelist.push_back({ w, x, y });
	}

	void kruskals_mst()
	{
		// 1. Sort all edges
		sort(edgelist.begin(), edgelist.end());

		// Initialize the DSU
		DSU s(V);
		int ans = 0;
		cout << "Following are the edges in the "
				"constructed MST"
			<< endl;
		for (auto edge : edgelist) {
			int w = edge[0];
			int x = edge[1];
			int y = edge[2];

			// Take this edge in MST if it does
			// not forms a cycle
			if (s.find(x) != s.find(y)) {
				s.unite(x, y);
				ans += w;
				cout << x << " -- " << y << " == " << w
					<< endl;
			}
		}
	
		cout << "Minimum Cost Spanning Tree: " << ans;
	}
};

// Driver's code
int main()
{
	/* Let us create following weighted graph
				10
			0--------1
			| \	 |
			6| 5\ |15
			|	 \ |
			2--------3
				4	 */
	Graph g(4);
	g.addEdge(0, 1, 10);
	g.addEdge(1, 3, 15);
	g.addEdge(2, 3, 4);
	g.addEdge(2, 0, 6);
	g.addEdge(0, 3, 5);

	// Function call
	g.kruskals_mst();
	return 0;
}

```


## **Resources:**
<br>

* [**GFG**](https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/)
