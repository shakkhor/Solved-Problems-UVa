#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    while(scanf("%lld",&n)==1 && n!=0)
        if(n%9==0)
            printf("%lld %lld\n",n-1 +n/9, n+n/9);
        else
            printf("%lld\n",n+n/9);

    return 0;
}
