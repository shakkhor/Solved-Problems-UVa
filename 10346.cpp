#include<stdio.h>

int main()
{
    int k,n,total;

    while(scanf("%d%d",&n,&k)==2)
    {
        total = n;
        while(n>=k)
        {
            n = n-k+1;
            total ++;
        }
        printf("%d\n",total);
    }

    return 0;
}
