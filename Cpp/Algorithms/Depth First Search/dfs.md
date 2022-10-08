# Depth First Search

In [Depth First Search algorithm](https://www.programiz.com/dsa/graph-dfs) implementation we put each vertex of the graph into one of two categories:

1. Visited
2. Not Visited

The purpose of the algorithm is to mark each vertex as visited while avoiding cycles.

The implementation of DFS algorithm is as follows:

1. We start by putting any one of the graph's vertices on top of a stack.
2. Then we take the top item of the stack and add it to the visited list.
3. Then we create a list of that vertex's adjacent nodes. Here we only add those nodes which aren't in the visited list to the top of the stack.
4. Then we repeat step 2 and 3 until our stack is empty.

<br>

* * * * *

<br>

## **Working of DFS**

<br>

Now we will see the working of dfs with the help of an example. In this example we will take a undirected graph of 5 vertices.
![DFS steps](https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-0.png "undirected graph")

Starting from vertex 0, the DFS algorithm starts by putting it in the Visited list and putting all its adjacent vertices in the stack.
![DFS steps](https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-1.png "Visiting the elements and putting them in the stack")

Now according to the implementation step we will visit the top element of the stack i.e 1 and go to its adjacent nodes. Since 0 is already marked as visited we will now move to the node 2.
![DFS steps](https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-2.png "Visit the top element of the stack")

Now vertex 2 has an unvisited adjacent vertex 4, so we push vertex 4 in the stack and mark it as visited.
![DFS steps](https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-3.png "Visiting vertex 4 which is adjacent to vertex 2, so we push it to the stack and mark it visited")
![DFS steps](https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-4.png "Visiting vertex 4 which is adjacent to vertex 2, so we push it to the stack and mark it visited")

Now we will visit the last element 3 of the stack, it doesn't have any unvisited adjacent nodes, and the stack is empty too thus we now have completed our depth first travel of the graph.
![DFS steps](https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-5.png "Visited all the nodes of the undirected graph")

<br>

* * * * *

<br>

## **DFS Psuedocode**

<br>

The pseudocode for DFS is shown below. In the init() function, notice that we run the DFS function on every node. This is because the graph might have two different disconnected parts so to make sure that we cover every vertex, we can also run the DFS algorithm on every node.
```
DFS(G, u)
    u.visited = true
    for each v ∈ G.Adj[u]
        if v.visited == false
            DFS(G,v)
     
init() {
    For each u ∈ G
        u.visited = false
     For each u ∈ G
       DFS(G, u)
}
```

<br>

* * * * *

<br>

## DFS implementation in C++

<br>

```cpp
// DFS algorithm in C++

#include <iostream>
#include <list>
using namespace std;

class Graph {
  int numVertices;
  list<int> *adjLists;
  bool *visited;

   public:
  Graph(int V);
  void addEdge(int src, int dest);
  void DFS(int vertex);
};

// Initialize graph
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
  visited = new bool[vertices];
}

// Add edges
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_front(dest);
}

// DFS algorithm
void Graph::DFS(int vertex) {
  visited[vertex] = true;
  list<int> adjList = adjLists[vertex];

  cout << vertex << " ";

  list<int>::iterator i;
  for (i = adjList.begin(); i != adjList.end(); ++i)
    if (!visited[*i])
      DFS(*i);
}

int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);

  g.DFS(2);

  return 0;
}
```

<br>

* * * * *

<br>

## **Complexity of Depth First Search**

<br>

* The time complexity of the DFS algorithm is represented in the form of 
**O(V + E),** where V is the number of nodes and E is the number of edges.

* The space complexity of the algorithm is **O(V)**.

<br>

* * * * *

<br>

## **Application of DFS algorithm**

<br>

1. For finding the path
2. To test if the graph is bipartite
3. For finding the strongly connected components of a graph
4. For detecting cycles in a graph

<br>

* * * * *

## **Resources**

<br>

* [Programiz](https://www.programiz.com/dsa/graph-dfs)

<br>

* * * * *
