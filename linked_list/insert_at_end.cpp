#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){
    node* head = new node(5);
    head->next = new node(10);
    head->next->next = new node(15);
    node

}