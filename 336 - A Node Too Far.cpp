#include<bits/stdc++.h>
using namespace std;
map< long long, long long >m;
vector< int >graph[35];
int ca = 1;

void bfs(long long src, long long l, long long s, int node)
{
    int u, v, i,k=0, no=0;
    int visited[100] = {0};
    int level[100] = {0};
    int g[100];




    visited[src] = 1;
    level[src] = 0;

    queue<int>q;

    q.push(src);

    while(!q.empty())
    {
        u = q.front();

        for(i = 0; i < graph[u].size(); i++)
        {
            v = graph[u][i];

            if(!visited[v])
            {
                visited[v] = 1;
                level[v] = level[u]+1;
                q.push(v);
                k++;
            }
        }

        q.pop();
    }
    printf("Case %d: ",ca++);
    for(i=1;i<node;i++)
        if(i!=src)
        if(level[i]>l||level[i]<1)
        no++;

    printf("%d nodes not reachable from node %lld with TTL = %lld.\n",no,s,l);


}

int main()
{
    int n ;
    while(scanf("%d",&n)&& n)
    {

        m.clear();
        for(int i =0;i<35; i++)
            graph[i].clear();

        int node = 1;
        long long a,b;

        for(int i = 0; i<n; i++)
        {
           scanf("%lld %lld",&a,&b);
            if(m[a] == 0) m[a] = node++;
            if(m[b] == 0) m[b] = node++;

            graph[m[a]].push_back(m[b]);
            graph[m[b]].push_back(m[a]);

        }
        while(scanf("%lld %lld",&a,&b)&& (a || b))
        {
            bfs(m[a],b,a,node);
        }



    }
    return 0;
}
