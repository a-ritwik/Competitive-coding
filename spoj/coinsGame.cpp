#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int k,l,n;
    cin >> k;
    cin >> l;
    cin >> n;
    bool arr[1000001];
    for (int i = 0; i < 1000001; ++i) {
        arr[i]= false;
    }
    arr[0]= false;
    arr[1]= true;

    for (int j = 2; j < 1000001; ++j) {
        if(!arr[j-1]){
            arr[j]= true;
        }else if(!arr[j-k]  && j>=k){
            arr[j]= true;
        }else if(!arr[j-l] && j>=l){
            arr[j]= true;
        }
        
        
    }
    int num;
    for (int m = 0; m < n; ++m) {
        cin >> num;
        if(arr[num]){
            cout <<"A";
        }else{
            cout <<"B";
        }
    }
    return 0;
}