#include <iostream>
using namespace std;

int a(int num){
    int arr[100]={0};
    arr[0]=0;
    arr[1]=1;
        if ((int) (num) > 1) {
            if (a((int) (num / 2)) + a((int) (num / 3)) + a((int) (num / 4)) > num) {
                arr[num] = a((int) (num / 2)) + a((int) (num / 3)) + a((int) (num / 4));
            } else {
                arr[num] = num;
            }
        }

        return arr[num];

}


int main(){
    for (int i = 0; i <10 ; ++i) {
        int num;
        cin >> num;
        cout << a(num);
        cout << "\n";
    }
    return 0;
}