#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(const vector<int> &A) {
    int ans = -9999999;
    int cumulative = 0;
    int maxval = -9999999;

    for(int i=0; i<A.size(); i++){
        maxval = max(maxval, A[i]);
        cumulative += A[i];
        ans = max(cumulative, ans);
        if(cumulative<0){
            cumulative =0;
        }
    }
    return max(ans, maxval);
}

int main(){
    vector<int> myvector (9);
    myvector[0]=-2;
    myvector[1]=1;
    myvector[2]=-3;
    myvector[3]=4;
    myvector[4]=-1;
    myvector[5]=2;
    myvector[6]=1;
    myvector[7]=-5;
    myvector[8]=4;
    cout << maxSubArray(myvector);
    return 0;
}


