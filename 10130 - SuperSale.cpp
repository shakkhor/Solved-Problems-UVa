#include<bits/stdc++.h>
using namespace std;

int p[1005],w[1005],n;
int dp[1005][50];

int max_sale(int in, int we)
{
    int k,m;
    if(in>=n) return 0;

    int &ret = dp[in][we];

    if(ret != -1) return ret;

    k=m=0;

    if(we-w[in]>=0)
        k = p[in] + max_sale(in+1, we-w[in]);

    m = max_sale(in+1,we);

    return ret = max(k,m);

}

int main()
{
    long long t, ppl, i,j,k,l,we;

    long long ans;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

        for(i=0; i<n; i++)
            scanf("%d %d",&p[i],&w[i]);


       scanf("%lld",&ppl);
       ans = 0;

       memset(dp,-1, sizeof(dp));

       while(ppl--)
       {
           scanf("%lld",&we);

           ans+=max_sale(0, we);
       }

       printf("%lld\n",ans);
    }

    return 0;
}
