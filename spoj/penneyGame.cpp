#include <iostream>
#include <stack>
using namespace std;
int main() {
    int testCases;
    cin >> testCases;
    for (int k = 0; k < testCases; ++k) {
        int num;
        cin >> num;
        int countHHH = 0;
        int countHHT = 0;
        int countHTH = 0;
        int countHTT = 0;
        int countTHH = 0;
        int countTHT = 0;
        int countTTH = 0;
        int countTTT = 0;
        char arr[40];
        for (int i = 0; i < 40; ++i) {
            cin >> arr[i];
        }
        for (int j = 0; j < 38; ++j) {
            if (arr[j] == 'H') {
                if (arr[j + 1] == 'H') {
                    if (arr[j + 2] == 'H') {
                        countHHH++;
                    } else {
                        countHHT++;
                    }
                } else {
                    if (arr[j + 2] == 'H') {
                        countHTH++;
                    } else {
                        countHTT++;
                    }
                }
            } else {
                if (arr[j + 1] == 'H') {
                    if (arr[j + 2] == 'H') {
                        countTHH++;
                    } else {
                        countTHT++;
                    }
                } else {
                    if (arr[j + 2] == 'H') {
                        countTTH++;
                    } else {
                        countTTT++;
                    }
                }

            }
        }
        cout << num;
        cout << " ";
        cout << countTTT;
        cout << " ";
        cout << countTTH;
        cout << " ";
        cout << countTHT;
        cout << " ";
        cout << countTHH;
        cout << " ";
        cout << countHTT;
        cout << " ";
        cout << countHTH;
        cout << " ";
        cout << countHHT;
        cout << " ";
        cout << countHHH;
        cout << "\n";
    }
}