#include<iostream>
using namespace std;

int _min(int a,int b, int c){
    if(a<=b && a<=c){
        return a;
    } else if(b<=a && b<=c){
        return b;
    } else{
        return c;
    }
}


int main() {
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
    for (int l = 1; l < row+2; ++l) {
        arr[l][0]=arr[l][1];
        arr[l][row+1]=arr[l][row];
    }
//
//    for (int i = 0; i < row+2; ++i) {
//        for (int j = 0; j < col+2; ++j) {
//           cout << arr[i][j];
//            cout << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//    cout << "\n";

    for (int k = row; k > 0; k--) {
        for (int j = col; j >0; j--) {
            arr[k][j] =arr[k][j]+_min(arr[k+1][j-1],arr[k+1][j],arr[k+1][j+1]);
            arr[k][0]=arr[k][1];
            arr[k][row+1]=arr[k][row];
        }
    }
//    for (int i = 0; i < row+2; ++i) {
//        for (int j = 0; j < col+2; ++j) {
//            cout << arr[i][j];
//            cout << " ";
//        }
//        cout << "\n";
//    }

    int min = arr[1][1];
    for (int m = 1; m < col + 1; ++m) {
        if (arr[1][m] < min) {
            min = arr[1][m];
        }
    }
    cout << min;
    cout << "\n";

}