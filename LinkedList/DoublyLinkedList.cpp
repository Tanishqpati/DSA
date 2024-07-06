#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* prev;
    Node* next;

    public:
    Node(int data) {
        value = data;
        prev = nullptr;
        next = nullptr;
    }
    Node(int data, Node* prev1, Node* next1){
        value = data;
        prev = prev1;
        next = next1;
    }
};

Node* convertArrayToDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i], prev, nullptr);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
}

 int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrayToDLL(arr);
    print(head);
    
    return 0;
 }