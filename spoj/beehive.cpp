#include <iostream>
using namespace std;
int main() {
    int arr[20000] = {0};
    arr[1] = 1;
    for (int i = 2; i < 20000; ++i) {
        arr[i] = arr[i - 1] + 6 * (i - 1);
    }
//    for (int i = 0; i < 20000; ++i) {
//        cout << arr[i];
//        cout << " ";
//
//    }

    int num=-10;
    while (num!=-1){
        cin >> num;
        for (int i = 1; i < 20000; ++i) {
            if(arr[i]==num){
                cout << "Y";
                cout << "\n";
                break;
            }if(i==19999 && num!=-1){
                cout << "N";
                cout << "\n";
            }
        }
    }

}