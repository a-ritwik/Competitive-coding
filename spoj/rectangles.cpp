#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int sum=0;
    for (int i = 2; i < num; ++i) {
        for (int j = i; j < num; ++j) {
            if(i*j<=num){
                sum++;
            }
           if(i*j>num) {
            break;
           }
        }
    }
    cout << sum+num;
}
