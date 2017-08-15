#include<bits/stdc++.h>
using namespace std;

#define si(n) scanf("%d",&n)
#define pi(n) printf("%d",n);
#define pn   printf("\n")

#define pb(n) push_back(n);

vector<int> dom[100005],st;
bool vis[100005] = {false};
stack<int> stk;

void dfs(int u)
{
    vis[u]=true;
    for(int i=0; i<dom[u].size(); i++)
    {
        int v=dom[u][i];
        if(!vis[v])    dfs(v);
    }
    st.pb(u);

    return;
}
int check(int n)
{

    memset(vis,false,sizeof(vis));
    for(int i=1; i<=n; i++)
        if(!vis[i])     dfs(i);


    memset(vis,false,sizeof(vis));
    int cnt=0;

    for(int i=st.size()-1; i>=0; i--)
        if(!vis[st[i]])
        {
            cnt++;
            dfs(st[i]);
        }
 return cnt;
}


int main()
{
    //freopen("11504.txt", "w", stdout);

    int i ,j,k, p,t,m,n,x,y,lst;

    si(t);

    while(t--)
    {
        si(n);
        si(m);



        for(i=0; i<m; i++)
        {
            si(x);
            si(y);
            dom[x].pb(y);
        }


        pi(check(n));
        pn;

        st.clear();

        for(i=0;i<=n;i++)dom[i].clear();

    }

    return 0;

}
