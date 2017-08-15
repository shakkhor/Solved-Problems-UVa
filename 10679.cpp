#include<stdio.h>
#include<string.h>

int main()
{
    int i,t,q,j, k, flag, l;

    char m[100010],s[1010];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",m);
        l = strlen(m);
        scanf("%d",&q);
        while(q--)
        {
            flag = 0;
            scanf("%s",s);
            k = strlen(s);
            for(i=0; i<= l-k; i++)
            {
                for(j=0; j<k; j++)
                {
                    if(m[i+j]==s[j])flag = 1;
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag = 1 && j ==k )
                {
                    printf("y\n");
                    break;
                }


            }
            if(flag == 0) printf("n\n");
        }
    }

    return 0;
}
