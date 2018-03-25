#include <iostream>
using namespace std;
int main(){
    int testCases;
    cin >> testCases;
    for (int j = 0; j < testCases; ++j) {
        int n, m;
        cin >> n;
        cin >> m;
        int arr[n];
        for (int i = 0; i < m; ++i) {
            cin >> arr[i];
            cin >> arr[i + 1];
        }
        if (n % 2 == 0) {
            cout << "yes";
            cout << "\n";
        } else {
            cout << "no";
            cout << "\n";
        }
    }
}
