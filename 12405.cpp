
#include <cstdio>

using namespace std;

int main(){
    int T,N;
    char s[100];

    scanf("%d",&T);

    for(int tc = 1;tc <= T;++tc){
        scanf("%d %s",&N,s);

        int ans = 0;

        for(int i = 0;i < N;){
            if(s[i] == '#') ++i;
            else{
                ++ans;
                i += 3;
            }
        }

        printf("Case %d: %d\n",tc,ans);
    }

    return 0;
}
