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
};
class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = nullptr;
    }
    void push_front(int val){
        Node* newNode = new Node(val);//dynamic;
        // Node newNode(val);// static;
        if(head == nullptr){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head=newNode;
        }
    }void printLL(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data;
            temp = temp->next;
        }
    }void push_back(int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = tail = nullptr;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }void pop_front(){
        if(head == nullptr){
            cout << "LL is empty";
        }else{
            Node* temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
        }
    }void pop_back(){
        if(head == nullptr){
            cout << "LL is empty";
            return;
        }Node* temp = head;
        while (temp->next!=tail)
        {
            temp = temp->next;
        }
        temp->next = nullptr;
        delete tail;
        tail = temp;
    }
    void insert(int val, int pos){
        if (pos < 0){
            cout << "invalid pos\n";
            return;
        }if (pos == 0){
            push_front(val);
        }Node* temp = head;
        for (int i = 0; i < pos-1;i++){
            if(temp == nullptr){
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next=temp->next;
        temp->next = newNode;
    }
    int search(int key){
        Node* temp = head;
        int idx = 0;
        while(temp!=nullptr){
            if(temp->data == key){
                return idx;
            }idx++;
            temp = temp->next;
        }return -1;
    }
};

int main(){
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    // l1.push_back(4);
    // l1.push_back(6);
    // l1.pop_front();
    // l1.pop_back();
    l1.insert(4,1);

    l1.printLL();
    cout << endl;
    cout << l1.search(2);
    cout << endl;
}