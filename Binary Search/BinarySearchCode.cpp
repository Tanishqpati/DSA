// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==t){
            cout<<"found";
            break;
        } else if(t>v[mid]){
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return 0;
}