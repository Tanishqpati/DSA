// Online C++ compiler to run C++ program online
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

Node* deleteHead(Node* head){
    if (head == nullptr) return nullptr;

    Node* newHead = head->next;
    if (newHead != nullptr) {
        newHead->prev = nullptr;
    }
    delete head;
    return newHead;
}
void deleteTail(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp = temp->prev;
    delete temp->next;
    temp->next=NULL;
}
Node* deletekthElement(Node* head, int k){
    if(head == NULL) { return head; }
    if(k==1){
        return deleteHead(head);
    }
    int count = 1;
    Node* temp = head;
    while(temp->next!=nullptr && count<k){
        temp = temp->next;
        count++;
    }
    if(temp==nullptr) { return head;}
    if(temp->prev!=nullptr){
        temp->prev->next = temp->next;
    }
    if(temp->next!=nullptr){
        temp->next->prev = temp->prev;
    }
    delete temp;
    return head;
}
int main() {
    // Write C++ code here
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrayToDLL(arr);
    print(head);
    // head = deleteHead(head);
    cout<<endl;
    // deleteTail(head);
    // print(head);
    deletekthElement(head, 5);
    print(head);

    return 0;
}