#include<stdio.h>


int main()
{
    int test, ar[1010], i, n,sum,t;
    float abv;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d",&n);
        sum = 0;
        t = 0;

        for(i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
            sum += ar[i];
        }
        sum = sum/n;

        for(i = 0; i < n; i++)
        {
            if(ar[i] > sum) t++;
        }

        abv = ( (float)t/ (float)n )*100;
        printf("%0.3f%%\n",abv);
    }

    return 0;
}
