#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100000];
map<string,int>d;
int path[100000], parent[10000];


int bfs(int from, int to)
{
    int s,temp, k = 1;
    int visited[100000]={0};
    int len, flag = 0;
    queue<int>q;

    q.push(from);
    visited[from] = 1;

    parent[from] = from;

    while(!q.empty())
    {
        s = q.front();
        len = graph[s].size();
        for(int i = 0; i<len; i++)
        {
            temp = graph[s][i];
            if(!visited[temp])
            {
                visited[temp] = 1;

                parent[temp] = s;
                if(temp == to)
                {
                    flag = 1;
                    return flag;
                }

                q.push(temp);
            }
        }
        q.pop();

    }
    return flag ;
}

int main()
{
    int n;
    string route[100000];

    while(scanf("%d",&n) && n)
    {
        int k = 1;

        for(int i = 0; i<n; i++)
        {
            string a, b;
            cin>> a>>b;
            if(d[a] == 0) d[a] = k++;
            if(d[b] == 0) d[b] = k++;

            graph[d[a]].push_back(d[b]);
            graph[d[b]].push_back(d[a]);

            route[d[a]] = a;
            route[d[b]] = b;
        }

        string to,from;
        cin>>from>>to;
        int flag = bfs(d[from],d[to]);
        printf("\n");
        //printf("\n");

        if(flag == 0)
            printf("No route\n");
        else
        {
            int k,i,j;
            d[to]= k;
            for(i=0;;)
            {
                path[i++] = k;
                if(parent[k]==d[from])
                    break;
                k = parent[k];
            }
            path[i]= d[from];
            for(j=i;j>=1;j--)
            {
                cout<<route[path[j]]<<" "<<route[path[j-1]]<<endl;
            }

        }
        printf("\n");

        memset(path, 0, sizeof(path));
        d.clear();
        for(int i = 0; i<100000;i++)
            graph[i].clear();
        getchar();

    }

    return 0;
}
