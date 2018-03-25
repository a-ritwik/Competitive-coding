#include <iostream>
using namespace std;


int main(){
    int testcases;
    cin >> testcases;
    for (int m = 0; m < testcases; ++m) {
        int num;
        int sumSignal = 0;
        cin >> num;
        if (num % 2 == 0) {
            int arr1[num];
            for (int i = 0; i < num; ++i) {
                cin >> arr1[i];
            }
            cout << "no";
            cout << "\n";
        } else {
            int arr[num];
            int mid;
            int signal[num] = {0};
            for (int i = 0; i < num; ++i) {
                cin >> arr[i];
            }
            mid = num / 2;
            //cout << mid;
            for (int j = 0; j <= mid; ++j) {
                if (arr[j] == j + 1) {
                    signal[j] = 1;
                }
            }
            for (int k = mid; k < num; ++k) {
                if (arr[k] == arr[num - k - 1]) {
                    signal[k] = 1;
                }
            }
            for (int l = 0; l < num; ++l) {
                if (signal[l] == 1) {
                    sumSignal++;
                }
            }
            if (sumSignal == num) {
                cout << "yes";
                cout << "\n";
            } else {
                cout << "no";
                cout << "\n";
            }
        }
    }
    return 0;
}