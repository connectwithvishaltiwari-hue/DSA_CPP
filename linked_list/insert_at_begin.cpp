#include <bits/stdc++.h>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Solution class
class Solution {
public:

    // Insert at beginning
    Node* insertAtBeginning(Node* head, int x) {

        Node* newNode = new Node(x);

        newNode->next = head;

        head = newNode;

        return head;
    }

    // Insert at end
    Node* insertAtEnd(Node* head, int x) {

        Node* newNode = new Node(x);

        // If list is empty
        if (head == nullptr) {
            return newNode;
        }

        Node* temp = head;

        // Reach last node
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;

        return head;
    }

    // Print linked list
    void printList(Node* head) {

        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {

    // Initially empty list
    Node* head = nullptr;

    Solution sol;

    // Insert at beginning
    head = sol.insertAtBeginning(head, 30);
    head = sol.insertAtBeginning(head, 20);
    head = sol.insertAtBeginning(head, 10);

    cout << "After insertion at beginning: ";
    sol.printList(head);

    // Insert at end
    head = sol.insertAtEnd(head, 40);
    head = sol.insertAtEnd(head, 50);

    cout << "After insertion at end: ";
    sol.printList(head);

    return 0;
}