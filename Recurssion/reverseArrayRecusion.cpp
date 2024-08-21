// Reverse an arrray with recursion
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void reverseArr(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    swap(arr[l], arr[r]);
    l++;
    r--;
    reverseArr(arr, l, r);
}
int main() {
    // Write C++ code here
    int arr[]={1, 9, 3, 11, 8, 5};
    int l = 0;
    int r = 5;
    reverseArr(arr, l, r);
    for(int i = 0; i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}