#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,j,m,t,d,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        int sum=0;
        map<char, int>dam;
        char str[10001],ch;
        double ans;
        while(k--)
        {
            cin>>ch>>d;
            dam[ch]=d;

        }
        scanf("%d",&k);
        getchar();
        while(k--)
        {
            gets(str);
            l = strlen(str);
            for(i=0; i<l; i++)
                sum+=dam[str[i]];

        }
        ans=sum/100.0;
        printf("%.2lf$\n",ans);
    }
    return 0;
}
