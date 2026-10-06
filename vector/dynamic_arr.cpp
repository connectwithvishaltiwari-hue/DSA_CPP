#include <iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    int *arr = new int [size];
    // Internally intialization
    // arr[0] => *(arr+0);
    // arr[1] => *(arr+1);
    int x = 1;
    for(int i = 0; i < size; i++){
        arr[i] = x;
        cout << arr[i];
        x++;
    }cout << endl;
}    