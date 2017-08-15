#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
using namespace std;
#define PI acos(-1.0)

int main()
{
    int test;
    double width, len, r, areaG, areaR;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%lf", &len);
        width=(len*6)/10;
        r=(len/5);
        areaR= (PI*r*r);
        areaG= (len*width)-areaR;
        printf("%0.2lf %0.2lf\n", areaR, areaG);
    }
    return 0;
}
