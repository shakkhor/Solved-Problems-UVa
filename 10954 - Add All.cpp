#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,cost,tmp,x,y,k;


    while(scanf("%d",&n)&&n)
    {
        priority_queue<int>q;
        cost = 0;
        for(i=0;i<n;i++)
        {
            cin>>k;
            q.push(-k);
        }
        while(q.size()>1)
        {
            x = -q.top();
            q.pop();
            y = -q.top();
            q.pop();
            k = x+y;
            cost+=k;
            q.push(-k);
        }
        cout<<cost<<endl;
    }
}
