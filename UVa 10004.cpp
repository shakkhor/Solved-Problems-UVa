#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int black = 200;
int red  = 250;
int white = 0;
vector<int> edges[250];
int color[205] = {0};

bool bicolor(int start)
{	
	int parent, child;
	queue<int> nodes;
	nodes.push(start);
	color[start] = black;
	while(!nodes.empty())
	{
		parent = nodes.front();
		nodes.pop();
		int i, siz = edges[parent].size();
		for(i=0;i<siz; i++)
		{
			if(color[edges[parent][i]]==white)
			{
				if(color[parent]==black)
					color[edges[parent][i]] = red;
				else
					color[edges[parent][i]] = black;
				nodes.push(edges[parent][i]);
			}
			else
			{
				if(color[parent]==color[edges[parent][i]])
					return false;
			}
		}
	}
	return true;
}

int main() {
	int n, l,x,y;
	scanf("%d",&n);
	while(n)
	{
		scanf("%d",&l);
		for(int i = 0;  i<l;i++){
			scanf("%d %d",&x,&y);
			edges[x].push_back(y);
			edges[y].push_back(x);
		}
		bool ans = bicolor(0);
		if(ans)
			printf("BICOLORABLE.\n");
		else
			printf("NOT BICOLORABLE.\n");
		for(int i=0; i<n; i++)
			edges[i].clear();
		memset(color, 0, sizeof(color));
		scanf("%d",&n);
		
	}
	return 0;
}