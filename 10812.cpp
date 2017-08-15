#include<stdio.h>


int main()
{
    int x,y,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&x,&y);

        if(x<y || (x-y)%2==1)printf("impossible\n");
        else printf("%d %d\n",(x+y)/2,x-(x+y)/2);
    }

    return 0;
}
