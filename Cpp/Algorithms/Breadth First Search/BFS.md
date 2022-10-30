# Breadth First Search or BFS for a Graph


Breadth-First Traversal (or Search) for a graph is similar to Breadth-First Traversal of a tree. 

The only catch here is, that, unlike trees, graphs may contain cycles, so we may come to the same node again. To avoid processing a node more than once, we divide the vertices into two categories:

1. Visited and
2. Not visited.

A boolean visited array is used to mark the visited vertices. For simplicity, it is assumed that all vertices are reachable from the starting vertex. BFS uses a queue data structure for traversal.

**Example:**

In the following graph, we start traversal from vertex 2.

![BFS](https://media.geeksforgeeks.org/wp-content/uploads/bfs-5.png)

When we come to vertex 0, we look for all adjacent vertices of it. 

1. 2 is also an adjacent vertex of 0.
2. If we don't mark visited, then 2 will be processed again and it will become a non-terminating process.


There can be multiple BFS traversals for a graph. Different BFS traversals for the above graph :
2, 3, 0, 1
2, 0, 3, 1

**Implementation of BFS traversal:**

Follow the below method to implement BFS traversal.

1. Declare a queue and insert the starting vertex.
2. Initialize a visited array and mark the starting vertex as visited.
3. Follow the below process till the queue becomes empty:
    * Remove the first vertex of the queue.
    * Mark that vertex as visited.
    * Insert all the unvisited neighbours of the vertex into the queue.

The implementation uses an adjacency list representation of graphs. STL‘s list container stores lists of adjacent nodes and the queue of nodes needed for BFS traversal.

// Program to print BFS traversal from a given
// source vertex. BFS(int s) traverses vertices
// reachable from s.
#include<bits/stdc++.h>
using namespace std;

// This class represents a directed graph using
// adjacency list representation
class Graph
{
	int V; // No. of vertices

	// Pointer to an array containing adjacency
	// lists
	vector<list<int>> adj;
public:
	Graph(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int v, int w);

	// prints BFS traversal from a given source s
	void BFS(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::BFS(int s)
{
	// Mark all the vertices as not visited
	vector<bool> visited;
	visited.resize(V,false);

	// Create a queue for BFS
	list<int> queue;

	// Mark the current node as visited and enqueue it
	visited[s] = true;
	queue.push_back(s);

	while(!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		// Get all adjacent vertices of the dequeued
		// vertex s. If a adjacent has not been visited,
		// then mark it visited and enqueue it
		for (auto adjecent: adj[s])
		{
			if (!visited[adjecent])
			{
				visited[adjecent] = true;
				queue.push_back(adjecent);
			}
		}
	}
}

// Driver program to test methods of graph class
int main()
{
	// Create a graph given in the above diagram
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	g.BFS(2);

	return 0;
}


**Output**

Following is Breadth First Traversal (starting from vertex 2) 
2 0 3 1 

**Time Complexity:**  O(V+E), where V is the number of nodes and E is the number of edges.

**Auxiliary Space:** O(V)

## BFS for Disconnected Graph:

Note that the above code traverses only the vertices reachable from a given source vertex. In every situation, all the vertices may not be reachable from a given vertex (i.e. for a disconnected graph). 

**To print all the vertices, we can modify the BFS function to do traversal starting from all nodes one by one**

Below is the implementation for BFS traversal for the entire graph (valid for directed as well as undirected graphs) with possible multiple disconnected components:



/*
-> Generic Function for BFS traversal of a Graph
(valid for directed as well as undirected graphs
which can have multiple disconnected components)
-- Inputs --
-> V - represents number of vertices in the Graph
-> adj[] - represents adjacency list for the Graph
-- Output --
-> bfs_traversal - a vector containing bfs traversal
for entire graph
*/

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
	vector<int> bfs_traversal;
	vector<bool> vis(V, false);
	for (int i = 0; i < V; ++i) {
		
		// To check if already visited
		if (!vis[i]) {
			queue<int> q;
			vis[i] = true;
			q.push(i);
			
			// BFS starting from ith node
			while (!q.empty()) {
				int g_node = q.front();
				q.pop();
				bfs_traversal.push_back(g_node);
				for (auto it : adj[g_node]) {
					if (!vis[it]) {
						vis[it] = true;
						q.push(it);
					}
				}
			}
		}
	}
	return bfs_traversal;
}



## RESOURCES
[**GFG**](https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/)

