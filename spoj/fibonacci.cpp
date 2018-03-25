#include <iostream>
using namespace std;

int fibonacci (int n){
    if(n==1 || n==0){
        return n;
    }
    int ans=fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

int main(){
    int num;
    cin >> num;
    cout << fibonacci(num);
    return 0;
}