
#include<bits/stdc++.h>
using namespace std;

vector<int>graph[10000];

#define white 0
#define red 200
#define yellow 300

void bfs(int s);

int main()
{
    int a,b,e,i,j,k,l,n,x,y,c,t,s;

    while( scanf("%d",&n) && n!=0)
    {
        //scanf("%d",&e);

        while(scanf("%d %d",&a,&b)&& (a!=0 && b!=0))
        {

            graph[b].push_back(a);
            graph[a].push_back(b);
            x = a;
        }



        bfs(x);
       for(i=0;i<310;i++)
        graph[i].clear();
    }

    return 0;

}

void bfs(int s)
{
    int i, u , v,color, flag = 0;
    int visited[1001];
    memset(visited,0,sizeof(visited));


    visited[s] = red;

    queue<int>q;
    q.push(s);

    while(!q.empty())
    {
        u = q.front();

        color = visited[u];

        for(i = 0; i<graph[u].size(); i++)
        {

            v = graph[u][i];

            if(visited[v] == color )
            {
                flag = 1;
                break;
            }

            else if(visited[u] == red && visited[v] == white)
            {
                visited[v] = yellow;
                q.push(v);

            }

            else if(visited[u] == yellow && visited[v]== white)
            {
                visited[v] = red;
                q.push(v);

            }

        }

        q.pop();
        if(flag == 1)
            break;
    }
    if(flag == 1)
        printf("NO\n");
    else
        printf("YES\n");
}
