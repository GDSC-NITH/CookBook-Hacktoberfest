# **Topological Sorting condition**

1. Topological Sorting for a graph is not possible if the graph is not a  Directed Acyclic Graph (DAG).

2. Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge u v, vertex u comes before v in the ordering.

3. So, To find the Topological sorting for a graph, we just have to find in-degrees of each vertex and order the nodes from least in-degree to the highest.

```c
#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,m;cin>>n>>m;  

    **n = number of nodes in graph, m = number  of edges in graph which connect to edges**

 int cnt=0;
 vector<vector<int>> adj(n);

    vector of vector ,adj is used to store the information that node x is connected to node y or not.
 vector<int> indeg(n,0);

   indeg vector is used to check that how many nodes are directly connected to indeg[i] node.

 for(int i=0;i<m;i++){
  int u,v;
  cin>>u>>v;
  adj[u].push_back(v);
  indeg[v]++;
 }
 queue<int>pq;
 for(int i=0;i<n;i++){
  if(indeg[i]==0){
   pq.push(i);
  }
 }
 while(!pq.empty()){
  int x=pq.front();
 
  pq.pop();
  cout<<x<<" ";
  for(auto it:adj[x]){
   indeg[it]--;
   if(indeg[it]==0)
   pq.push(it);
  }
 }
   " Now, node has been stored in topological order  in queue pq."

}
```

```
INPUT 
n = 6
m = 6
(5,2)
(5,0)
(4,0)
(4,1)
(2,3)
(3,1)
```

```
OUTPUT
5 4 2 3 1 0
```
