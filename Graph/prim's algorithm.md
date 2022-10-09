**Prim's Algorithm**
1. It is used for Minimum Spanning Tree (MST).

2. A minimum spanning tree (MST) or minimum weight spanning tree is a subset of the edges of a connected, edge-weighted undirected graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight.

Prim's algorithm is a minimum spanning tree algorithm that takes a graph as input and finds the subset of the edges of that graph which

* form a tree that includes every vertex
* has the minimum sum of weights among all the trees that can be formed from the graph


**Working**
It falls under a class of algorithms called greedy algorithms that find the local optimum in the hopes of finding a global optimum.

We start from one vertex and keep adding edges with the lowest weight until we reach our goal.

The steps for implementing Prim's algorithm are as follows:

Initialize the minimum spanning tree with a vertex chosen at random.
Find all the edges that connect the tree to new vertices, find the minimum and add it to the tree
Keep repeating step 2 until we get a minimum spanning tree




```#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
#define vi vector<int>
vi parents(N);
vi dis(N);
vi vis;
int inf=1e9;
vector<vector<int>> g[N];

int main()
{
	for(int i=0;i<N;i++)
	dis[i]=inf;
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		g[u].push_back({v,w});
	}
	int source;
 
	cin>>source;
	set<vector<int>>s;
	s.insert({0,source});
	int cost=0;
	while(!s.empty())
	{
		auto x=*(s.begin());
		s.erase(x);
		vis[x[1]]=true;
		int w=x[0];
		cost+=w;
		for(auto it:g[x[1]])
		{
			if(vis[it[0]])
			continue;
			if(dis[it[0]]>it[1])
			{
				s.erase({dis[it[0]],it[0]});
				dis[it[0]]=it[1];
				s.insert({dis[it[0]],it[0]});
				parents[it[0]]=x[1];
			}
		}
		cout<<cost<<endl;
		
	}
	cout<<cost<<endl;
}
```

