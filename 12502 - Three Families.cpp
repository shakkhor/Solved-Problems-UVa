#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z,a;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);


        printf("%d\n",(2*x*z-y*z)/(x+y));
    }
    return 0;
}
