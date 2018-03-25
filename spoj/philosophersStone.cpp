#include <iostream>
using namespace std;

int max(int a,int b, int c){
    if(a>=b && a>=c){
        return a;
    } else if(b>=a && b>=c){
        return b;
    } else{
        return c;
    }
}

int main(){
    int testCases;
    cin >> testCases;
    for (int n = 0; n < testCases; ++n) {


        int row;
        int col;
        cin >> row;
        cin >> col;
        int arr[row + 2][col + 2] = {0};
        for (int k = 0; k < col + 2; ++k) {
            arr[0][k] = 0;
        }
        for (int i = 1; i < row + 1; i++) {
            for (int j = 1; j < col + 1; ++j) {
                cin >> arr[i][j];
            }
        }
//    for (int i = 0;  i< row+2; i++) {
//        for (int j = 0; j < col+2; ++j) {
//            cout << arr[i][j];
//            cout << " ";
//        }
//        cout << "\n";
//    }

        for (int l = row; l > 0; l--) {
            for (int i = col; i > 0; i--) {
                arr[l][i] += max(arr[l + 1][i - 1], arr[l + 1][i], arr[l + 1][i + 1]);
            }
        }

//    for (int i = 0;  i< row+2; i++) {
//        for (int j = 0; j < col+2; ++j) {
//            cout << arr[i][j];
//            cout << " ";
//        }
//        cout << "\n";
//    }
        int max = arr[1][1];
        for (int m = 1; m < col + 1; ++m) {
            if (arr[1][m] > max) {
                max = arr[1][m];
            }
        }
        cout << max;
        cout << "\n";
    }
}