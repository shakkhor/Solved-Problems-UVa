#include<bits/stdc++.h>
using namespace std;

#define         si(n)           scanf("%d",&n)
#define         sl(n)           scanf("%I64d",&n)
#define         sd(n)           scanf("%lf",&n)

#define         pi(n)           printf("%d",n)
#define         pl(n)           printf("%I64d",n)
#define         pd(n)           printf("%lf",n)

#define         pn              printf("\n")
#define         ph              printf(" ")


#define         W               0
#define         G               200
#define         B               555

#define         CLR(a,b,c)      memset(a,b,sizeof c)
#define         PI              3.14159265359

#define         hey             int main()
#define         cya             return 0


hey
{
    int cas = 1,t;
    cin>>t;
    double a,b,c, ak, ak2, ans;
    while(t--)
    {
        scanf("%lf %lf %lf",&a,&b,&c);

        printf("Case %d: ",cas++);
        ak =(a*c)/b;
        if( b==0.0 || b==ak)
        {
            printf("-1\n");
            continue;
        }

        ak2 =(a+ak)*c +(a+ak)*ak;
        ak2 =ak2/(b-ak);
        ans=ak+ak2;
        if(ans>0)printf("%.10lf\n",ans);
        else
            printf("-1\n");
    }
    cya;
}
