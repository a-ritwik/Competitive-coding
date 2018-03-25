#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num%10==0){
        cout << "2";
        cout << "\n";
    }else{
        cout << "1";
        cout << "\n";
        cout << num%10;
        cout << "\n";
    }
}
