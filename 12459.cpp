#include<stdio.h>

long long fib(int n){

long long int f=0,m=1,i,sum=0;
for(i=1; i<=n; i++){
    sum=f+m;
    f=m;
    m=sum;
}
return sum;
}

int main(){

int n;
while(scanf("%d",&n)==1 && n!=0){
    printf("%lld\n",fib(n));
}
return 0;
}
