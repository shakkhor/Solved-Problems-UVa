#include <stdio.h>

int main()
{
    int lines, i=1, j, k;
    while(scanf("%d", &lines)==1 && lines>=0)
    {
        for(j=1, k=1; k<lines; j++, k*=2){}
        printf("Case %d: %d\n", i, j-1);
        i++;
    }
    return 0;
}

