// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int len;
    cin>>len;
    int arr[len];
    int hasharr[100];
    memset(hasharr, 0, sizeof(hasharr));
    for (int i=0;i<len;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<len;i++){
        hasharr[arr[i]] +=1;
    }
    int ncount;
    cin>>ncount;
    for(int i=0; i<ncount;i++) {
        int input;
        cin>>input;
        cout<<hasharr[input];

    }

    return 0;
}