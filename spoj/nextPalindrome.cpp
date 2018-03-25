#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long checkPali(long long n){
    long long reversedNumber = 0;
    long long remainder=0;
    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}

int main(){
    long long testcases;
    cin >> testcases;
    for (long long j = 0; j < testcases; ++j) {
        long long n;
        cin >> n;
        if (n == checkPali(n)) {
            n++;
        }
        for (int i = 0; i < n / 2; i++) {
            if (n == checkPali(n)) {
                break;
            } else {
                n++;
            }
        }
        cout << n;
        cout <<'\n';
    }
    return 0;
}