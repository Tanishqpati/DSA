// recurssion code for sum upto N numbers
#include <iostream>
using namespace std;

int sumNum(int n){
    if(n==1){
        return 1;
    }
    int num = n + sumNum(n-1);
    return num;
}

int main() {
    // Write C++ code here
    int ans = sumNum(5);
    cout<<ans;
    return 0;
}