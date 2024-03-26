// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int count = 1;
void printNum(int n){
    cout<<count<<endl;
    count++;
    if (count > n) {
        return;
    }
    printNum(n);

}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    printNum(n);


    return 0;
}