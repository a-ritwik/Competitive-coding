#include <iostream>
using namespace std;
int main(){
    long long testCases;
    cin >> testCases;
    for (long long k = 0; k < testCases; ++k) {


        long long num;
        cin >> num;
        long long arr[num];
        for (long long i = 0; i < num; ++i) {
            cin >> arr[i];
        }
        long long ans = 0;
        long long a = num - 1;
        for (long long j = num - 1; j >= 0; --j) {
            ans = ans + a * arr[j];
            a = a - 2;
        }
        cout << ans;
        cout << "\n";
    }
}