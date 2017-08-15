#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n, s,d;

    int i;

    while(scanf("%lld %lld",&s,&d)==2)
    {

        n = 0;

        for(i=s;;i++)
        {
            n+=i;
            if(n>=d)
            {
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}
