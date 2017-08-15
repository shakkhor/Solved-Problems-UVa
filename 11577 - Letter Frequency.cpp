#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,j,n,m;
    char c[210];
    while(scanf("%d\n",&t)!=EOF)
    {
        for(i=1; i<=t; i++)
        {

            gets(c);
            int x[30]= {0};
            j=0;
            while(c[j]!='\0')
            {
                if(c[j]>='A'&&c[j]<='Z') x[c[j]-65]++;
                else if(c[j]>='a'&&c[j]<='z') x[c[j]-97]++;
                ++j;
            }
            m=0;
            for(n=0; n<26; n++)
            {
                if(x[n]>m) m=x[n];
            }
            for(n=0; n<26; n++)
            {
                if(x[n]==m) printf("%c",n+97);
            }
            printf("\n");
        }
    }
    return 0;
}
