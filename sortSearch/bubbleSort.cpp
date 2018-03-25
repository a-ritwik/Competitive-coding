#include<iostream>
using namespace std;

int arr[] = {5,2,1,4,3};

void bubbleSort(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =  temp;
            }
        }
    }
}

int main(){
    for(int i=0;i<5;i++){
        cout << arr[i];
    }
    cout << "\n";
    bubbleSort(5);
    for(int i=0;i<5;i++){
        cout << arr[i];
    }
    return 0;
}
