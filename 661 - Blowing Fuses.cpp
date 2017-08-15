#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,c, s = 1;
    while(cin>>n>>m>>c,  n||m||c)
    {
        int ar[50], on[50]= {0}, nc = 0, flag = 0, pA=-1;
        for(int i=1; i<=n; i++)
            cin>>ar[i];

        for(int i = 1; i<=m ; i++)
        {
            int d;
            cin>>d;
            if(on[d]==0)
            {
                nc+= ar[d];
                on[d] = -1;
            }
            else if(on[d]== -1)
            {
                nc-=ar[d];
                on[d] = 0;
            }

            if(nc>c)
                flag = 1;
            pA = max(pA,nc);
        }
        if(flag == 1)
            printf("Sequence %d\nFuse was blown.\n\n",s++);
        else
            printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",s++,pA);

    }

    return 0;


}


