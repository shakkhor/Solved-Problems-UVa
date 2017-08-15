#include <stdio.h>

int main()
{
    int t_t, t, ca,t1;
    while(scanf("%d",&t_t)==1)
    {
        t1  = 5;
        ca = 0;
        while(t1--)
        {
            scanf("%d",&t);
            if(t == t_t) ca++;
        }
        printf("%d\n",ca);
    }
    return 0;

}
