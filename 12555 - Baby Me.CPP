#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[20];
    int tc, i, j;
    float ans, a, b;

    scanf("%d", &tc);
    getchar();
    for(i = 1; i <= tc; i++)
    {
        scanf("%f", &a);
        gets(s);
        ans = a * 0.5;
        for(j = 0; j < strlen(s) - 1; j++)
        {
           if(isdigit(s[j]))
            {
                b = ((s[j] - '0') * 0.05);
                ans = ans + b;
            }
        }



        printf("Case %d: %g\n", i, ans);
    }

    return 0;
}
