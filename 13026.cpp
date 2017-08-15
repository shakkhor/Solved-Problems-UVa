#include<stdio.h>
#include<string.h>
int main()
{
    int i,j, f,t,l,n, c = 1;
    char dad[1010][12], jll[12];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%s",dad[i]);
        scanf("%s",jll);
        l = strlen(jll);
        printf("Case %d:\n",c);
        for(i=0;i<n;i++)
        {
            f = 0;
            for(j=0;j<l;j++)
            {
                if(dad[i][j]!=jll[j])f++;
                if(f>1)break;
            }
            if(f<=1)printf("%s\n",dad[i]);



        }
        c++;
    }
    return 0;
}
