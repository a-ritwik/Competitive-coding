#include<bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

long arr[6001][6001];
long max(long a, long b){
    if(a>b)
    return a;
    return b;
}

int lcs(char *X, char *Y, long m, long n){
 //   long arr[m+1][n+1];
    for(long i=0;i<=m;i++){
        for(long j=0;j<=n;j++){
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
    long testcases;
    cin >> testcases;
    for(long j=0;j<testcases;j++){
    char a[6002];
    cin >> a;
    long len=strlen(a);
    char b[len]="";
    for(long i=0;i<len;i++){
        b[i]=a[len-i-1];
    }
    long m=strlen(a);
    long n=strlen(b);
    printf("%d\n", len-lcs(a,b,m,n));
    }
}
