#include<bits/stdc++.h>
using namespace std;

vector<int>graph[30];
int visited [30];

void dfs(int s)
{
    queue<int> q;
    int t,k,l;
    q.push(s);

  //  t = q.top();

    while(!q.empty())
    {
        t=q.front();
        visited[t]= 1;
        for(int i =0; i<graph[t].size(); i++)
        {
            l = graph[t][i];
            if(!visited[l])
            {
                visited[l] = 1;
                q.push(l);
            }
            //printf("%d %d ",t,l);
        }

        q.pop();
    }
}

int main()
{
    int t , c;

    scanf("%d",&t);
     char nd, ed[10];
     gets(ed);
    getchar();
    //freopen("out.txt","w",stdout);

    while(t--)
    {
        c = 0;

        scanf("%c", &nd);
        getchar();
        int nds = nd - 'A';

        memset(visited,0,sizeof(visited));
        for(int i =0; i<30;i++)
            graph[i].clear();


        while(gets(ed))
        {
           // getchar();
            if(strlen(ed)==0)
                break;

            graph[ed[0]-'A'].push_back(ed[1]-'A');
            graph[ed[1]-'A'].push_back(ed[0]-'A');

        }

        for(int i = 0; i<=nds; i++)
        {
            if(visited[i]==0)
            {
                dfs(i);
                c++;
            }

        }

        printf("%d\n",c);
        if(t)
            printf("\n");


    }

    return 0;
}
