# DFS for a Graph

## **Depth First Search**

**Depth First Search** (DFS) is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking.

***

## The algorithm works as follows

* SET STATUS = 1 (ready state) for each node in G

* Push the starting node A on the stack and set its STATUS = 2 (waiting state)

* Repeat Steps 4 and 5 until STACK is empty

* Pop the top node N. Process it and set its STATUS = 3 (processed state)

* Push on the stack all the neighbors of N that are in the ready state (whose STATUS = 1) and set their STATUS = 2 (waiting state)

[END OF LOOP]

* EXIT

The graph might have two different disconnected parts so to make sure that we cover every vertex, we can also run the BFS algorithm on every node

***

## **DFS Example**

Example of DFS algorithm

Now, let's understand the working of the DFS algorithm by using an example. In the example given below, there is a directed graph having 7 vertices.

![bfs-sort-algorithm1](https://static.javatpoint.com/ds/images/depth-first-search-algorithm.png)

Now, let's start examining the graph starting from Node H.

**Step 1** - First, push H onto the stack.
STACK: H

**Step 2** - POP the top element from the stack, i.e., H, and print it. Now, PUSH all the neighbors of H onto the stack that are in ready state.

Print: H STACK: A  
**Step 3** - POP the top element from the stack, i.e., A, and print it. Now, PUSH all the neighbors of A onto the stack that are in ready state.

Print: A  
STACK: B, D  
**Step 4** - POP the top element from the stack, i.e., D, and print it. Now, PUSH all the neighbors of D onto the stack that are in ready state.

Print: D  
STACK: B, F  
**Step 5** - POP the top element from the stack, i.e., F, and print it. Now, PUSH all the neighbors of F onto the stack that are in ready state.

Print: F  
STACK: B  
**Step 6** - POP the top element from the stack, i.e., B, and print it. Now, PUSH all the neighbors of B onto the stack that are in ready state.

Print: B  
STACK: C  
**Step 7** - POP the top element from the stack, i.e., C, and print it. Now, PUSH all the neighbors of C onto the stack that are in ready state.

Print: C  
STACK: E, G  
**Step 8** - POP the top element from the stack, i.e., G and PUSH all the neighbors of G onto the stack that are in ready state.

Print: G  
STACK: E  
**Step 9** - POP the top element from the stack, i.e., E and PUSH all the neighbors of E onto the stack that are in ready state.

Print: E  
STACK:  
Now, all the graph nodes have been traversed, and the stack is empty.

***

## **SAMPLE**

The code for the Depth First Search Algorithm with an example is shown below. The code has been simplified so that we can focus on the algorithm rather than other details.

### **C++ Code**

```cpp
// DFS algorithm in C++


#include <bits/stdc++.h>
using namespace std;


class Graph {
public:
 map<int, bool> visited;
 map<int, list<int> > adj;

 void addEdge(int v, int w);

 void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
 adj[v].push_back(w);
}

void Graph::DFS(int v)
{
 visited[v] = true;
 cout << v << " ";

 list<int>::iterator i;
 for (i = adj[v].begin(); i != adj[v].end(); ++i)
  if (!visited[*i])
   DFS(*i);
}

int main()
{

 Graph g;
 g.addEdge(0, 1);
 g.addEdge(0, 2);
 g.addEdge(1, 2);
 g.addEdge(2, 0);
 g.addEdge(2, 3);
 g.addEdge(3, 3);

 cout << "Following is Depth First Traversal"
   " (starting from vertex 2) \n";


 g.DFS(2);

 return 0;
}

 
```

### **Python Code**

```cpp

from collections import defaultdict


class Graph:

 def __init__(self):

  self.graph = defaultdict(list)

 def addEdge(self, u, v):
  self.graph[u].append(v)

 def DFSUtil(self, v, visited):

  visited.add(v)
  print(v, end=' ')

  for neighbour in self.graph[v]:
   if neighbour not in visited:
    self.DFSUtil(neighbour, visited)

 def DFS(self, v):

  visited = set()

  self.DFSUtil(v, visited)


if __name__ == "__main__":
 g = Graph()
 g.addEdge(0, 1)
 g.addEdge(0, 2)
 g.addEdge(1, 2)
 g.addEdge(2, 0)
 g.addEdge(2, 3)
 g.addEdge(3, 3)

 print("Following is DFS from (starting from vertex 2)")
 # Function call
 g.DFS(2)



```

### **DFS Algorithm Complexity**

The time complexity of the DFS algorithm is O(V+E), where V is the number of vertices and E is the number of edges in the graph.

The space complexity of the DFS algorithm is O(V).

***

## **Resources:**

* [**JAVAPOINT**](https://www.javatpoint.com/depth-first-search-algorithm)
* [**GFG**](https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/)
