#include<iostream>
#include <stdio.h>

using namespace std;

void bubbleSort(int arr[], int n){
   for (int i = 0; i < n-1; i++){
       for (int j = 0; j < n-i-1; j++){
           if (arr[j] > arr[j+1]){
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}


int main(){
    int t;
    cin >> t;
    for(int g=0;g<t;g++){
        int len;
        cin >> len;
        int s1[len];
        int e1[len];
        for(int i=0;i<len;i++){
            cin >> s1[i];
            cin >> e1[i];
        }

        int s2[len];
        int e2[len];
        for(int i=0;i<len;i++){
            e2[i]=e1[i];
        }
        mergeSort(e2,0,len-1);
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(e2[i]==e1[j]){
                    s2[i]=s1[j];
                    e1[j]=-1;
                    break;
                }
            }
        }
        int number=1;
        int i, j;
        i = 0;
        for (j = 1; j < len; j++){
          if (s2[j] >= e2[i]){
              number++;
              i = j;
          }
        }
        cout << number;
        cout << "\n";
    }
}
