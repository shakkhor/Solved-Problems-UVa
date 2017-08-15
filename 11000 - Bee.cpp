#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m[1010],f[1010],total,n;

    m[0]=0;
    f[0]=1;
    for(int i=1;i<=70;i++)
        {
            m[i]=m[i-1]+f[i-1];
            f[i]=m[i-1]+1;
        }


    while(scanf("%lld",&n)&& n!=-1)
    {

        printf("%lld %lld\n",m[n],m[n]+f[n]);
    }

    return 0;

}
