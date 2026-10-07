#include <iostream>
#include <queue>
using namespace std;

class StackUsingQueue {
private:
    queue<int> q;

public:
    // Push operation: O(n) time
    void push(int data) {
        int n = q.size();
        q.push(data);
        
        // Rotate the queue to bring the new element to the front
        for (int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << "Pushed " << data << " to stack" << endl;
    }

    // Pop operation: O(1) time
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int poppedValue = q.front();
        q.pop();
        return poppedValue;
    }

    // Peek operation: O(1) time
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return q.front();
    }

    // Check if stack is empty
    bool isEmpty() {
        return q.empty();
    }
};

int main() {
    StackUsingQueue s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Popped: " << s.pop() << endl; // Should be 30
    cout << "Top element: " << s.peek() << endl; // Should be 20
    return 0;
}
