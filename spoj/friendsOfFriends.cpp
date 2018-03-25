#include<iostream>
using namespace std;
int main() {
    int arr[10000]={0};
    int k=0;
    int numOfFriends;
    cin >> numOfFriends;
    int codeOffriends[numOfFriends];

    for (int i = 0; i < numOfFriends; ++i) {
        int numFOF;
        cin >> codeOffriends[i];
        cin >> numFOF;
        for (int j = 0; j < numFOF; ++j) {
            cin >> arr[k];
            k++;
        }
    }


    int limit;
    for (int l = 0; l < 10000; ++l) {
        if(arr[l]==0){
            limit = l;
            break;
        }
    }

    int newArr[limit];
    for (int m = 0; m < limit; ++m) {
        newArr[m]=arr[m];
    }

    for (int n = 0; n < numOfFriends; ++n) {
        for (int i = 0; i < limit; ++i) {
            if(codeOffriends[n]==newArr[i]){
                newArr[i]=0;
            }
        }
    }

    for (int j = 0; j < limit; ++j) {
        for (int i = j+1; i < limit; ++i) {
            if(newArr[j]==newArr[i]){
                newArr[i]=0;
            }
        }
    }
    int total=0;
    for (int j = 0; j < limit; ++j) {
        if (newArr[j]!=0){
            total++;
        }
    }

    cout << total;
    cout << "\n";
}

