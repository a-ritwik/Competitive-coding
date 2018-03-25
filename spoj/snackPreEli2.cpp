#include <iostream>
using namespace std;
int main(){
    int testCases;
    cin >> testCases;
    for (int k = 0; k < testCases; ++k) {
        string a;
        cin >> a;
        char arr[a.length()];
        int numM = 0;
        int numS = 0;

        for (int i = 0; i < a.length(); ++i) {
            arr[i] = a[i];
        }
//    for (int i = 0; i <a.length() ; ++i) {
//        cout << arr[i];
//        cout << ' ';
//    }
        for (int i = 0; i < a.length(); ++i) {
            if (arr[i] == 'm' & arr[i + 1] == 's') {
                arr[i] = 'c';
                arr[i + 1] = 'c';
                numM++;
            }
        }
//    for (int i = 0; i <a.length() ; ++i) {
//        cout << arr[i];
//        cout << ' ';
//    }
        for (int i = 0; i < a.length(); ++i) {
            if (arr[i] == 'm' & arr[i - 1] == 's') {
                arr[i] = 'c';
                arr[i - 1] = 'c';
                numM++;
            }
        }
        for (int j = 0; j < a.length(); ++j) {
            if (arr[j] == 'm') {
                numM++;
            }
            if (arr[j] == 's') {
                numS++;
            }
        }
   //     cout << numM;
   //     cout << numS;
        if (numM > numS) {
            cout << "mongooses";
            cout << '\n';
        }
        if (numM < numS) {
            cout << "snakes";
            cout << '\n';
        }
        if (numM == numS) {
            cout << "tie";
            cout << '\n';
        }
    }
}