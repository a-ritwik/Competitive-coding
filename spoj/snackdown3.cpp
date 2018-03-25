#include <iostream>
using namespace std;
int main(){
    int arr[20][20]={0};
    int x1,y1,x2,y2;
    int x3,y3,x4,y4;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    cin >> x4;
    cin >> y4;
    if(x1==x2) {
        for (int i = y1; i <y2; ++i) {
            arr[x1][i]=1;
        }
    }
    if(y1==y2) {
        for (int l = x1; l < x2; ++l) {
            arr[l][y1]=1;
        }
    }


    for (int j = 0; j < 20; ++j) {
        for (int k = 0; k < 20; ++k) {
            cout << arr[k][j];
        }
        cout << "\n";
    }

}