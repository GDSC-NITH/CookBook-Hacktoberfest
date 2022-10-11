# **Kruskal's Algorithm**

1. It is used for Minimum Spanning Tree (MST).

2. A minimum spanning tree (MST) or minimum weight spanning tree is a subset of the edges of a connected, edge-weighted undirected graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight.

3. Kruskal's algorithm is a minimum spanning tree algorithm that takes a graph as input and finds the subset of the edges of that graph which

-> form a tree that includes every vertex
-> has the minimum sum of weights among all the trees that can be formed from the graph

**Working**
It falls under a class of algorithms called greedy algorithms that find the local optimum in the hopes of finding a global optimum.

We start from the edges with the lowest weight and keep adding edges until we reach our goal.

The steps for implementing Kruskal's algorithm are as follows:


* Sort all the edges from low weight to high
* Take the edge with the lowest weight and add it to the spanning tree. If adding the edge created a cycle, then reject this edge.
* Keep adding edges until we reach all vertices.

```
#include<bits/stdc++.h>
using namespace std;
# define N 1e5
# define vi vector<int>
vi parents(N);
vi sz(N);

void make_set(int u)
{
 parents[u]=u;
 sz[u]=1;
}
int find_set(int v)
{  if(parents[v]==v)
    return v;
    return parents[v]=find_set(parents[v]);
 
}
void union_set(int u,int v)
{
 int x=parents[u];
 int y=parents[v];
 
 if(x!=y)
 {
  if(sz[x]<sz[y])
  swap(x,y);
  parents[y]=x;
  sz[x]+=sz[y];
 }
}
int main()
{   for(int i=0;i<N;i++) 
    make_set(i);
   
   vector<vector<int>>edges;
 int m;
 int u,v,w;

 cin>>m;
 for(int i=0;i<m;i++)
 {
  cin>>u>>v>>w;
     edges.push_back({w,u,v});
  
 }
 sort(edges.begin(),edges.end());
  int cost=0;
    for(auto x:edges)
    {  int p=x[1];
       int q=x[2];
     int a=find_set(p);
     int b=find_set(q);
     if(a==b)
     continue;
     else
     {
      cost+=x[0];
      union_set(x[1],x[2]);
  }
  
 }
    cout<<cost<<endl;
 return 0;
}
```

```
input 
m = 4
(0,1,10)
(1,3,15)
(2,3,4)
(2,0,6)
(0,3,5)
```

Output
Following are the edges in the constructed MST
2 -- 3 == 4
0 -- 3 == 5
0 -- 1 == 10
Minimum Cost Spanning Tree: 19

