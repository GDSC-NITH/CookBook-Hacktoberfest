
# **Minimum Spanning Tree**

## **What is Spanning Tree**

A Spanning tree is a subset to a connected graph G, where all the edges are connected, i.e, one can traverse to any edge from a particular edge with or without intermediates. Also, a spanning tree must not have any cycle in it. Thus we can say that if there are N vertices in a connected graph then the no. of edges that a spanning tree may have is N-1.

## **What is a Minimum Spanning Tree? **

Given a connected and undirected graph, a spanning tree of that graph is a subgraph that is a tree and connects all the vertices together. A single graph can have many different spanning trees. A minimum spanning tree (MST) or minimum weight spanning tree for a weighted, connected, undirected graph is a spanning tree with a weight less than or equal to the weight of every other spanning tree. The weight of a spanning tree is the sum of weights given to each edge of the spanning tree.

* Connected Graph
* NO Cycle
* Undirected
* Minnimum Weight

### How many edges does a minimum spanning tree has? 
A minimum spanning tree has (V – 1) edges where V is the number of vertices in the given graph. 

![graph](https://static.javatpoint.com/tutorial/daa/images/introduction-of-minimum-spanning-tree2.png)

![graph](https://static.javatpoint.com/tutorial/daa/images/introduction-of-minimum-spanning-tree5.png)


<br>

There are 2 ways to find out MST of any graph

* **Kruskal's Algorithm**
* **Prime Algorithm**
***
