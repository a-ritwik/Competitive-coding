#include <cstdio>
#include <cstring>
using namespace std;

char s[26];
int len,dp[25][226];

int solve(int pos, int prev){
    if(pos ==len) {
        return 1;
    }
    int &ret = dp[pos][prev];
    if(ret == -1){
        ret = 0;
        for(int i = pos,cur = 0;i < len;i++){
            cur =cur + s[i]-'0';
            if(cur >= prev){
                ret =ret + solve(i+1,cur);
            }
        }
    }
    return ret;
}

int main(){
    int count=1;
    while(true){
        scanf("%s",s);
        if(s[0]=='b'){
            break;
        }
        len = strlen(s);
        memset(dp,-1,sizeof(dp));
        printf("%d. %d\n",count++,solve(0,0));
    }
    return 0;
}
