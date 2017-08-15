#include<stdio.h>

int main()
{
    int c[55],  test, nc, j, x, y, i;
    long long s;

    scanf("%d",&test);

    while(test--)
    {
        s = 0;
        scanf("%d", &nc);

        for(i = 0; i < nc; i++)
            scanf("%d", &c[i]);

        for(i = 0; i < nc ; i++)
            for(j = 0; j < nc - 1; j++)
                if(c[j]>c[j+1])
                {
                    x = c[j] ;
                    y = c[j+1];
                    c[j+1] = x;
                    c[j] = y;
                    s++;
                }


       printf("Optimal train swapping takes %lld swaps.\n",s);

    }
    return 0;
}
