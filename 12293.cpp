#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    while ( scanf ("%lld", &n) && n!=0 )
    {
        long long ball = 1;
        while ( ball < n )
        {
            ball *= 2;
            ball++;
        }

        if ( ball == n ) printf ("Bob\n");
        else printf ("Alice\n");
    }

    return 0;
}

