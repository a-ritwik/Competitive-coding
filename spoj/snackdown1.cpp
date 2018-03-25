


//int main(){
//    int testcases;
//    cin >> testcases;
//    for (int i = 0; i < testcases; ++i) {
//        int length;
//        cin >> length;
//        int arr[length]={0};
//        char a;
//        int numDot = 0;
//        int numH = 0;
//        int numT = 0;
//        int oddPosH = 0;
//        int evenPosT = 0;
//
//        for (int j = 0; j < length-numDot; j++) {
//            cin >> a;
//            if (a == 'H') {
//                arr[j] = 1;
//            }
//            if (a == 'T') {
//                arr[j] = 2;
//            }
//            if (a == '.') {
//                j--;
//                numDot++;
//            }
//        }
//
//
//        for (int l = 0; l < length; l++) {
//            if (arr[l] == 1) {
//                numH++;
//            }
//            if (arr[l] == 2) {
//                numT++;
//            }
//        }
//        for (int k = length - numDot; k < length; k++) {
//            arr[k] = '0';
//        }
//
//
//        for (int m = 0; m < numH + numT; m++) {
//            if (arr[m] == 1) {
//                oddPosH++;
//            }
//            m++;
//        }
//        for (int n = 1; n < numH + numT; n + 2) {
//            if (arr[n] == 2) {
//                evenPosT++;
//            }
//            n++;
//        }
//
//        if (arr[0] == 2 || arr[numH + numT - 1] == 1) {
//            cout << "Invalid";
//            cout << "\n";
//        } else if (numH + numT != oddPosH + evenPosT) {
//            cout << "Invalid";
//            cout << "\n";
//        } else {
//            cout << "Valid";
//            cout << "\n";
//        }
//    }
//    return 0;
//
//}


#include <iostream>
using namespace std;
#define MAXN 505
char str[MAXN];
int main(){
    int testCases,num;
    cin>>testCases;
    while (testCases--){
        cin>>num>>str;
        int flag=0;
        for (int i=0;i<num;i++){
            if (flag==1) break;
            if (str[i]=='T') flag=1;
            if (str[i]=='H'){
                int gl=0;
                for (int j=i+1;j<num;j++){
                    if (str[j]=='T'){
                        i=j;
                        gl=1;
                        break;
                    }
                    if (str[j]=='H')
                        break;
                }
                if (gl==0) flag=1;
            }

        }
        if (flag==1){ cout<<"Invalid";cout << "\n";}
        else cout<<"Valid";cout << "\n";
    }
    return 0;
}