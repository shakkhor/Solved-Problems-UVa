#include<stdio.h>
#include<string.h>

int main()
{
    int l,num,test,score,i,j,k;
    char s[100];

    scanf("%d",&test);
    getchar();
    while(test--)
    {
        num =0;
        gets(s);
        l= strlen(s);
        score =0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='O')num++;
                else num =0;
            score+=num;
        }
        printf("%d\n",score);
    }
    return 0;
}
