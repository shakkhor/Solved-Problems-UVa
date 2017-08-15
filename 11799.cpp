#include<stdio.h>
int main()
{
    int i,s=0,t,n,c=1;
    scanf("%d",&t);

    while(t--)
    {
        s = 0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&i);
            if(i>s) s = i;
        }
        printf("Case %d: %d\n",c,s);
        c++;
    }
    return 0;
}
