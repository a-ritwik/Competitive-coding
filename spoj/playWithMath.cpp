#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main(){
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i) {
        int a;
        int b;
        cin >> a;
        cin >> b;
        cout << b / gcd(a, b);
        cout << " ";
        cout << a / gcd(a, b);
        cout << "\n";
    }
}