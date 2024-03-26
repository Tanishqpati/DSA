// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int count = 0;
void printName(string name){
    count++;
    cout<<name<<endl;
    if (count == 5) {
        return;
    }
    printName(name);

}

int main() {
    // Write C++ code here
    printName("Tanishq");


    return 0;
}