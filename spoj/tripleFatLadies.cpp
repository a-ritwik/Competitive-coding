#include <iostream>
using namespace std;


int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        long long b;
        cin >> b;
        cout << 192 + 250*(b-1);
        cout << '\n';

    }
    return 0;
}