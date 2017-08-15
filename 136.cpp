#include<stdio.h>

int main()
{
    int i=2, n =2, c = 1, x ;

    while(1)
    {

        x = n;

        while(n)
        {
            if(n == 1)
            {
                c++;
                break;
            }
            else if(n%2 == 0) n = n/2;
            else if(n%3 == 0) n = n/3;
            else if (n%5 == 0) n = n/5;
            else if(n%2 !=  0 || n%3 != 0 || n%5 != 0) break;





        }
        x ++;
        n = x;

        if(c ==  100) break;



    }
    printf("%d\n",x - 1 );

    return 0;
}
