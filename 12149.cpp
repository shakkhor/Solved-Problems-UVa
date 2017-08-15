#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d",&n) && n!=0)
        printf("%d\n",(2*n*n*n + 3*n*n + n)/6);

    return 0;
}
