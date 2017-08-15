#include <stdio.h>

int num[6],flag ;

bool check[6]= {false} ;
void dfs(int cur , int sum)
{

    int i;
    if(sum == 23 && cur ==5)
    {
        flag = 1 ;
        return ;
    }
    else
    {
        for(i = 0; i < 5; i++)
        {
            if(!check[i])
            {
                check[i] = true;
                dfs(cur + 1 , sum + num[i]);
                dfs(cur + 1 , sum * num[i] );
                dfs(cur + 1 , sum - num[i] );
                check[i] = false;
            }
        }
    }

}
int main()
{
    int a,b,c,d,e,i;
    while(scanf("%d%d%d%d%d",&num[0],&num[1],&num[2],&num[3],&num[4]) && num[0]+num[1]+num[2]+num[3]+num[4])
    {
        flag =0;
        for(i = 0 ; i<5; i++ )
        {
            check[i]=1;
            dfs(1,num[i]) ;
            check[i]=0;
        }
        if(flag)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }

    return 0;

}
