#include <iostream>
using namespace std;


int fact(int num){
    int result[1000]={0};
    result[0]=1;
    for (int i = 1; i <= num; i++) {
        result[i]=i*result[i-1];
    }
    return result[num];
}

int main(){
    int num;
    cin >> num;
    cout << fact(num);
    return 0;
}