#include<stdio.h>
#include<string.h>
int main()
{
    char inp[1000],c;
    int i;
    while ( scanf("%s",inp)!=EOF )
    {
          c=getchar();
          i = strlen(inp)-1 ;

        for(i; i>=0 ; i--)
          {
               printf("%c",inp[i]);
          }
          putchar(c);
    }
    return 0;
}
