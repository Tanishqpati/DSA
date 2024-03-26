// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printNum(int n){
    int count = 0;
    cout<<n<<endl;
    count = n - 1;
    if (count == 0) {
        return;
    }
    printNum(count);

}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    printNum(n);


    return 0;
}