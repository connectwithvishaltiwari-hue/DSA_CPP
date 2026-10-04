#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = nullptr;
    }
};
class doublyList{
    Node* head;
    Node* tail;
public:
    doublyList(){
        head = tail=nullptr;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

    }void print(){
        Node* temp = head;
        while (temp!=nullptr)
        {
            cout << temp->data << "<=>";
            temp =temp->next;
        }
        
    }void push_back(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }void pop_front(){
        if(head == nullptr){
            
        }
    }
};

int main(){
    doublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(4);

    dll.print();


}