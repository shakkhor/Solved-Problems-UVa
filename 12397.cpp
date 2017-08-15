#include<bits/stdc++.h>
using namespace std;

int main()
{
    int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1},
    match[13] = {4,  6,  3,  5,  2, 4, 2, 4, 2,3,2,3,1}, n;

    while(scanf("%d",&n)==1)
    {
        int bal = 0;

        for(int i=0; i<13; i++ )
        {
            while(n>=val[i])
            {
                bal+= match[i];
                n-=val[i];
            }
        }

        printf("%d\n",bal);
    }

    return 0;
}
