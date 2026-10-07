#include <iostream>
using namespace std;
class queue {
    int size = 10;
    int arr[10];
    int curr_size = 0;
    int start = -1;
    int end = -1;

public:
    void push(int n) {
        if (curr_size == size) {
            cout << "index out of range";
            return;
        }

        if (curr_size == 0) {
            start = 0;
            end = 0;
        } else {
            end = (end + 1) % size;
        }

        arr[end] = n;
        curr_size += 1;
    }

    int pop() {
        if (curr_size == 0) {
            cout << "no element found";
            return -1;
        }

        int element = arr[start];
        if (curr_size == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % size;
        }

        curr_size -= 1;
        return element;
    }
    void top(){
        if(curr_size == 0){
            cout << "No top elemenet";
        }cout << arr[start];
    }void sizeofqueue(){
        cout << curr_size;
    }
};

int main() {

}
