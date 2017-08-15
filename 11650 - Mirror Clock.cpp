#include<bits/stdc++.h>
using namespace std;

#define  pn  printf("%d",n);
#define  pnl  printf("\n");
#define  ph  printf(" ");
#define  pab  printf("%d %d\n",a,b);
#define  p:ab  printf("%d:%d\n",a,b);

#define  sc  scanf("%d",&n);
#define  sab  scanf("%d %d",&a,&b);




int main()
{
    int t, h, m,n;

    sc(t);

    while(t--)
    {

        m = (60 - m)%60;
        if(!m)
            h = 12-h;
        else h = 12-h-1;

        p:ab(h,m);
    }

    return 0;


}
