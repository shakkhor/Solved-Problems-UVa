#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    float x,y,r;
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        scanf("%f %f %f",&x,&y,&r);
        printf("%.2f %.2f\n",r-sqrt(x*x+y*y),r+sqrt(x*x+y*y));
    }
    return 0;
}
