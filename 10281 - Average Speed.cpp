#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    double h,m,s,speed, nowspeed,n;
    double distance = 0, now, time = 0;

    char input[1500];

    while(gets(input))
    {
        n = sscanf(input, "%lf:%lf:%lf %lf",&h,&m,&s,&nowspeed);

        now = h + m/60 +s/3600;
        distance += (now-time)*speed;
        time = now;


        if(n == 3)
            printf("%02d:%02d:%02d %.2lf km\n", (int)h,(int) m, (int)s, distance);
		else
			speed = nowspeed;

    }
    return 0;
}
