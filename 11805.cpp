#include <stdio.h>
int main()
{
    int i,t,n,k,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
        { scanf("%d %d %d",&n,&k,&p);

          printf("Case %d: %d\n",i,(((k-1+p)%n)+1));
        }
return 0;
}

