#include <stdio.h>
__USING_NAMESPACE_STD();

long long _max(long long a,long long b, long long c){
    if(a>=b && a>=c){
        return a;
    } else if(b>=a && b>=c){
        return b;
    } else{
        return c;
    }
}

int main(){
    int testCases;
    scanf("%d", &testCases);
    for (int k = 0; k <testCases ; ++k) {
        int num;
        scanf("%d", &num);
        long long arr[100009] = {0};
        long long sum[100009] = {0};
        for (int i = 0; i < num; ++i) {
            scanf("%d", &arr[i]);
        }

        for (int j = num - 1; j >= 0; --j) {
            sum[j] = _max(arr[j] + sum[j + 2], arr[j] + arr[j + 1] + sum[j + 4],
                          arr[j] + arr[j + 1] + arr[j + 2] + sum[j + 6]);
        }

        printf("%lld\n", sum[0]);
    }
}