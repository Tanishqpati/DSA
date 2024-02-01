// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0;i<=size-2;i++){
        int min = i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}