#include <iostream>
using namespace std;
void bubble_sort_assec(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        bool isSwap = false;
        for (int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }if(!isSwap){
            break;
        }
    }
}
void bubble_sort_desc(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        bool isSwap = false;
        for (int j = 0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }if (isSwap == false){
            break;
        }
    }
}
int main(){
    int arr[5] = {4,5,2,3,1};
    bubble_sort_assec(arr, 5);
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }cout << endl;
    bubble_sort_desc(arr, 5);
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}