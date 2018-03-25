#include <iostream>
#include <time.h>

using namespace std;

int fact(int num){

    if(num==1){
        return 1;
    }
    return num * fact(num - 1);
}

int main(){

    int num;
    cin >> num;
    cout << fact(num);
    return 0;
}




//int start_s=clock();
//int stop_s=clock();
//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;