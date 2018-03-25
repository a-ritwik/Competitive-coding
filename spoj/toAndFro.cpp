#include <iostream>
using namespace std;
int main(){
    while(true) {
        int column;
        cin >> column;

        if(column!=0) {
            string a;
            int row;
            cin >> a;
            row = a.length() / column;
            char arr[row][column];
            int k = 0;

            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < column; j++) {
                    arr[i][j] = a[k];
                    k++;
                }

            }

            for (int i = 1; i < row; i = i + 2) {
                char temp;
                for (int j = 0; j < column / 2; j++) {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][column - j - 1];
                    arr[i][column - j - 1] = temp;
                }
            }

            for (int i = 0; i < column; ++i) {
                for (int j = 0; j < row; j++) {
                    cout << arr[j][i];
                }
            }
            cout << "\n";
        }
        else{
            break;
        }

    }
}