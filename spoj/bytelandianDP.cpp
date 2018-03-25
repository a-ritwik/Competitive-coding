#include <iostream>
#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int> arr;
//long long arr[]={0};
long long check(long long num){
    if(num==0)
        return 0;
    if(arr[num]!=0)
        return arr[num];
    long long s=check(num/2)+check(num/3)+check(num/4);
    if(s>num)
        arr[num]=s;
    else
        arr[num]=num;
    return arr[num];
}

int main(){
    for (int i = 0; i <10 ; ++i) {
        long long num;
        cin >> num;
        cout << check(num);
        cout << "\n";
    }
    return 0;
}