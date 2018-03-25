#include <iostream>
using namespace std;

int fibonacciDP(int num){
    int n[100]={0};
    n[0]=0;
    n[1]=1;
    for (int i = 1; i <= num; i++) {
        n[i]=n[i-1]+n[i-2];
    }
    return n[num];
}



int main(){
    int num;
    cin >> num;
    cout << fibonacciDP(num);
    return 0;
}