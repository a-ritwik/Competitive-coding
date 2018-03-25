#include <iostream>
using namespace std;
long long _max(long long a,long long b, long long c){
    if(a>=b && a>=c){
        return a;
    } else if(b>=a && b>=c){
        return b;
    } else{
        return c;
    }
}

int main() {
    long long testCases;
    cin >> testCases;
    long n=0;
    for (long long l = 0; l < testCases; ++l) {
        long long max = 0;
        long long size;
        cin >> size;
        long long arr[size + 2];
        arr[0] = 0;
        arr[1] = 0;
        for (long long i = 2; i < size + 2; ++i) {
            cin >> arr[i];
        }
        for (long long j = 4; j < size + 2; ++j) {
            arr[j] = arr[j] + _max(arr[j - 2], arr[j - 3], arr[j - 4]);
        }
        for (long long k = 0; k < size + 2; ++k) {
            if (arr[k] > max) {
                max = arr[k];
            }
        }
        n++;
        cout << "Case ";
        cout << n;
        cout << ": ";
        cout << max;
        cout << "\n";
    }
}

