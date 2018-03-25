#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if(a>b)
    return a;
    return b;
}

int lcsNaive(char *X, char *Y, int n, int m){
    if(n==0 || m==0){
        return 0;
    }
    if(X[n-1]==Y[m-1]){
        return 1+lcsNaive(X, Y, n-1, m-1);
    }else{
        return max(lcsNaive(X, Y, n, m-1),lcsNaive(X, Y, n-1, m));
    }

}

int lcs(char *X, char *Y, int m, int n){
    int arr[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                arr[i][j]=0;
            }
            else if(X[i-1]==Y[j-1]){
                arr[i][j]=1+arr[i-1][j-1];
            }
            else{
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    return arr[m][n];
}


int main(){
    char a[]="cbba";
    char b[]="abbc";
    int m=strlen(a);
    int n=strlen(b);
    printf("%d", lcs(a,b,m,n));
    cout << lcs(a,b,m,n);
}
