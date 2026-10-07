#include <iostream>
using namespace std;

class Stack {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* top = nullptr;

public:
    bool isEmpty() {
        return top == nullptr;
    }

    void push(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        Node* temp = top;
        int poppedValue = top->data;
        top = top->next;
        delete temp; // Free memory allocation
        return poppedValue;
    }

    int peek() {
        if (isEmpty()) return -1;
        return top->data;
    }
    
    ~Stack() { // Cleanup memory on destruction
        while (!isEmpty()) pop();
    }
};

int main(){
    
}