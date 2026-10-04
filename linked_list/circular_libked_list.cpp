#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
}
void insertAtbegin(Node*& head, int value){
    Node* new_node = new Node(value);
    if(head == nullptr){
        head = new_node;
        new_node->next = head;
    }
    Node* temp = head;
    while(temp->next = head){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
    head=new_node;
}
void insertAtEnd(Node*& head, int value){
    Node* new_node = new Node(value);
    if(head == nullptr){
        new_node->next = new_node;
        return newNode;
    }
    Node* temp = head;
    while(temp->next = head){
        temp = temp->next;
    }temp->next = new_node;
    new_node-next = head;
}
int main(){

}