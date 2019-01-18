#include <bits/stdc++.h>
#include <iostream>
using namespace std;



int main() {
	// your code goes here
	int c = 1,  nc;
	while(cin>>nc, nc!=0){
		//printf("okay");
		map<int, vector<int>> edges;
		int u, v;
		for(int i=0; i<nc;i++)
		{
			cin>>u>>v;
			edges[u].push_back(v);
			edges[v].push_back(u);
		}
		
		int s,ttl;
		cin>>s>>ttl;
		while(!(s == 0 && ttl == 0))
		{
			queue<int>q;
			map<int, int>dist;
			q.push(s);
			dist[s] = 0;
			int reach = 1;
			while(!q.empty())
			{
				u = q.front();
				q.pop();
				for(int i=0; i<edges[u].size(); i++){
					v = edges[u][i];
					
					if(!dist.count(v)){
						dist[v] = dist[u] +1;
						if(dist[v]<=ttl)
						{
							reach++;
							q.push(v);
						}
					}
				}
			}
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n"
				,c++,edges.size()-reach, s, ttl);
			cin>>s>>ttl;
			
		}
	}
	
	
	return 0;
}