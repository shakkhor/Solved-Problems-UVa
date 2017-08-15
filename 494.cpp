#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,flag=0,n=0;

    char s[5000];
    while(gets(s))
    {
        l = strlen(s);
        flag = 0;
        n = 0;
        for(i=0;i<l;i++)
        {
            if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
            {
                flag = 1;
            }
            else if(flag!=0)
            {
                n++;
                flag =0;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
