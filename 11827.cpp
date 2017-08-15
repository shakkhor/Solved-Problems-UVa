#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int num[500],i,j=0,k,l,temp=0;
    char s[1000000];

    gets(s);
    l= strlen(s);

    for(i=0;i<=l;i++)
    {
        if(i==l&&temp!=0)
           {
               num[j]=temp;
               break;
               temp =0;
           }

        if(s[i] >= 48 && s[i] <= 57)temp = temp*10+ s[i]-48;
        else if(s[i] == 32 && temp != 0)
        {
            num[j]=temp;
            j++;
            temp =0;


        }



    }
    for(k=0;k<=j;k++)printf("%d  ",num[k]);


    return 0;
}
