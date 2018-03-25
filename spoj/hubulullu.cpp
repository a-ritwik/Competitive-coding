#include <iostream>
using namespace std;
int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i) {
        int num;
        cin >> num;
        int result=10;
        cin >> result;
        if (result==0){
            cout << "Airborne wins.";
            cout << "\n";
        }if (result==1){
            cout << "Pagfloyd wins.";
            cout << "\n";
        }
    }
}
