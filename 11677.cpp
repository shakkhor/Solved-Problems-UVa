#include<cstdio>

int main()
{
    int h1,h2,m1,m2,H,M,time;

    while (scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
    {
      if(h1==0 && h2==0 && m1==0 && m2==0)
      break;
     if(h1==0)
          h1=24;
          if(h2==0)
          h2=24;

      if(m1>m2)
      {
          m2=m2+60;
          M=m2-m1;

          if(h1+1>h2)
          h2=h2+24;
          H=h2-(h1+1);
          }

          else
          {

               if(h1>h2)
              h2=h2+24;
              M=m2-m1;
              H=h2-h1;
              }

        time=H*60+M;
        printf("%d\n",time);
        }
        return 0;
        }
