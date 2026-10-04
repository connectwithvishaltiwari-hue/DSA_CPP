#include <iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 1000;
}

int main(){
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;

    func(arr); // passing array name is eq. to passing pointer
    cout << arr[0] << endl;
}