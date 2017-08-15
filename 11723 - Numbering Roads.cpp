#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=1;

    while(scanf("%d %d",&a,&b) && a!= 0 && b!=0)
        if(b*26+b>=a)
        {
            if(a%b==0)
                printf("Case %d: %d\n",c++,a/b-1);
            else
                printf("Case %d: %d\n",c++,a/b);
        }
        else
            printf("Case %d: impossible\n",c++);

    return 0;

}
