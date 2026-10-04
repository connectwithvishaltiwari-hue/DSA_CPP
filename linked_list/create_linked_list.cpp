#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node (int value){
        data = value;
        next = nullptr;
    }
};

int main(){
    // node*first = new node();
    // first->data=10;
    // first->next = nullptr;
    // cout << first->data;
    // cout << first->next;

    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp =  temp->next;
    }
}