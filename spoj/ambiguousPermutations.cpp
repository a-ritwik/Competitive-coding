#include <iostream>
using namespace std;
int main(){
    int size=5;
    while (size!=0){
        int s = 0;
        cin >> size;
        if(size==0){
            break;
        }
        int input[size + 1] = {0};
        for (int i = 1; i < size + 1; ++i) {
            cin >> input[i];
        }
        int newArr[size + 1] = {0};
        for (int i = 1; i < size + 1; ++i) {
            newArr[input[i]] = i;
        }
//    for (int i = 0; i < size+1; ++i) {
//        cout <<   input[i];
//        cout << " ";
//    }
//    cout << "\n";
//    for (int i = 0; i < size+1; ++i) {
//        cout << newArr[i];
//        cout << " ";
//    }
        for (int i = 1; i < size + 1; ++i) {
            if (input[i] == newArr[i]) {
                s++;
            }
        }
        if (s == size) {
            cout << "ambiguous";
            cout << "\n";
        } else {
            cout << "not ambiguous";
            cout << "\n";
        }
    }
    return 0;

}