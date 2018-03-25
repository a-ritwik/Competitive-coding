#include <iostream>
using namespace std;

int main() {
    long long testCases;
    cin >> testCases;
    for (long long j = 0; j < testCases; ++j) {


        long long num;
        cin >> num;
        long long m = 0;
        for (long long i = 0; i < 13; ++i) {
            if ((30 * num + m) % 11 == 0) {
                break;
            }
            m++;
        }
        cout << m;
        cout << "\n";
    }
}
