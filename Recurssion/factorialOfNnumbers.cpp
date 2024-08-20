//factorial of n number using recurrsion function
#include <iostream>
using namespace std;
int fac(int n){
    if(n==1){
        return 1;
    }
    return int(n*fac(n-1));
}
int main() {
    // Write C++ code here
    int ans = fac(5);
    cout<<ans;

    return 0;
}