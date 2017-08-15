#include<stdio.h>

int main()
{
    int a,b,c,d,l,i,total;

    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l)==5)
    {
        total = 0;
        if(a==0&& b==0 && c == 0 && d==0 && l ==0) break;
        else
        {
            for(i=0;i<=l;i++)
                if((a*i*i+b*i+c)%d==0)total++;
        }
        printf("%d\n",total);
    }

    return 0;
}
