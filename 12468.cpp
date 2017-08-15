#include<stdio.h>

int main()
{
    int a,b,zp,temp;

    while(scanf("%d %d",&a,&b) &&  a != -1 && b != -1)
    {
        zp = 0;
        temp = 0;
        if(a>b)
        {
            temp = a-b;
            if(100 - a + b < temp) temp =  100 - a + b;
        }
        else
        {
            temp = b - a;
            if(100 + a - b < temp) temp =  100 + a - b;

        }

        zp  = temp;
        printf("%d\n",zp);



    }
    return 0;
}
