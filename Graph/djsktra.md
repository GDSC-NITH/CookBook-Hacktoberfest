***Dijkstra's Algorithm***
Dijkstra's algorithm allows us to find the shortest path between any two vertices of a graph.




```#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
int inf = 1e9;



int main()
{  
	int n,m;
	cin>>n>>m;
	vector<int>dis(n+1,inf);

	vector<vector<pair<int,int>>>g(n+1);
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	int source;
	cin>>source;
	dis[source]=0;
	
	set<pair<int,int>>s;
	s.insert({0,source});
	while(!s.empty())
	{
		auto x=*(s.begin());
		s.erase(x);
		for(auto it:g[x.second] )
		{
			if(dis[it.first]>dis[x.second]+it.second)
			s.erase({dis[it.first],it.first});
			dis[it.first]=dis[x.second]+it.second;
			s.insert({dis[it.first],it.first});
		
		}
		
	}
	for(int i=0;i<n;i++)
	{
		if(dis[i]<inf)
		cout<<dis[i]<<" ";
	}
	return 0;
}```

```
***Dijkstra's Algorithm Complexity***
Time Complexity: O(E Log V)

where, E is the number of edges and V is the number of vertices.


Space Complexity: O(V)
```

```
***Dijkstra's Algorithm Applications***

To find the shortest path,   
   To find the locations in the map
```

