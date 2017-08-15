#include<stdio.h>

int main()
{
    int n,f,e,total,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d%d",&n,&f,&e);
        n = n+f;
        total =0;
        while(n >=e)
        {
            n = n-e+1;
            total++;
        }
        printf("%d\n",total);
    }

    return 0;
}
