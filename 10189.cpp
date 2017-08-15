#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
int main()
{
    string str[105];
    int m,n,count,cases=1;
    while (scanf("%d%d\n",&m,&n)!=EOF)
    {
          if(!m && !n) break;
          if(cases!=1) cout<<endl;
          for(int i=1;i<=m;i++)
          {
                  getline(cin,str[i]);
                  str[i]='.'+str[i];
                  str[i].push_back('.');
          }
          string temp="";
          for(int j=0;j<n+2;j++)
          temp.push_back('.');
          str[0]=temp;
          str[m+1]=temp;
          for (int i=1;i<=m;i++)
          {
              for( int j=1;j<=n;j++)
              {
                   count=0;
                   if( str[i][j]!='*')
                   {
                       if(str[i-1][j-1]=='*') count++;
                       if(str[i][j-1]=='*') count++;
                       if(str[i+1][j-1]=='*') count++;
                       if(str[i+1][j]=='*') count++;
                       if(str[i+1][j+1]=='*') count++;
                       if(str[i][j+1]=='*') count++;
                       if(str[i-1][j+1]=='*') count++;
                       if(str[i-1][j]=='*') count++;
                       str[i][j]='0'+count;
                   }
              }
          }
          cout<<"Field #"<<cases++<<":"<<endl;
          for( int i=1;i<=m;i++)
          {
               for(int j=1;j<=n;j++)
                  cout<<str[i][j];
               str[i].clear();
               cout<<endl;
          }
}
    return 0;
}
