#include <iostream>
using namespace std;
int main(){
    long long numHalf=0;
    long long numThreeFourth=0;
    long long numOneFourth=0;
    long long numFriends;
    cin >> numFriends;
    string a;
    for (long long i = 0; i < numFriends; ++i) {
        cin >> a;
        if(a=="1/2"){
            numHalf++;
        }if(a=="3/4"){
            numThreeFourth++;
        }if(a=="1/4"){
            numOneFourth++;
        }
    }
    if(numThreeFourth>=numOneFourth){
        if(numHalf%2==0){
            cout << (numHalf/2+numThreeFourth)+1;
            cout << "\n";
        }else{
            cout << (numHalf/2+numThreeFourth)+2;
            cout << "\n";
        }
    }else{
        long long remainOneFourth=numOneFourth-numThreeFourth;
        if(numHalf%2==0){
            if(remainOneFourth%4==0) {
                cout << numHalf/2 + numThreeFourth+(remainOneFourth/4)+1;
                cout << "\n";
            }else{
                cout << numHalf/2 + numThreeFourth+(remainOneFourth/4)+1+1;
                cout << "\n";
            }
        }else{
            long long newRemainOneFourth=remainOneFourth-2;
            if(newRemainOneFourth%4==0) {
                cout << numHalf/2 +1+ numThreeFourth+(newRemainOneFourth/4)+1;
                cout << "\n";
            }else{
                cout << numHalf/2 +1+ numThreeFourth+(newRemainOneFourth/4)+1+1;
                cout << "\n";
            }
        }
    }
}

