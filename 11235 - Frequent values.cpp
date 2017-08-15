#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>chk;

    int num[100010], i,j,k,l,n,m,q;

    while(scanf("%d",&n)&&n)
    {
        scanf("%d",&q);

        for(i=1; i<=n; i++)
            scanf("%d",&num[i]);



        while(q--)
        {
            m = -1;
            scanf("%d%d",&k,&l);
            for(i=k; i<=l; i++)
            {
                chk[num[i]]++;
                m= max(m,chk[num[i]]);
            }
            chk.clear();

            printf("%d\n",m);
        }

    }

    return 0;
}
