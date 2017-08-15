#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,i,r;

    while(scanf("%d %d",&a,&b)&& a!=0 && b!=0)
    {
        c =0;
        for(i=a; i<=b;i++)
        {
            r =sqrt(i);
            if(r*r == i)c++;
        }
        printf("%d\n",c);
    }

    return 0;
}
