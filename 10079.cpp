#include<cstdio>

using namespace std;

int main()
{
    long long n;

    while(scanf("%lld",&n) && n >= 0)
    printf("%lld\n",(n*n + n)/2 +1);

    return 0;
}
