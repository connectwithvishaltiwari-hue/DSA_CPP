#include <iostream>
using namespace std;
void print(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
void selection_sort_assec(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min_idx = i;
        for (int j = i; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }swap(arr[i], arr[min_idx]);

    }print(arr, n);
}
void selection_sort_desc(int arr1[], int n){
    for (int i = 0; i < n-1; i++){
        int max_idx = i;
        for (int j = i; j < n; j++){
            if(arr1[j] > arr1[max_idx]){
                max_idx = j;
            }
        }swap(arr1[i], arr1[max_idx]);

    }print(arr1, n);
}
int main(){
    int arr[5] = {5,4,3,2,1};
    int arr1[5] = {1,2,3,4,5};
    selection_sort_assec(arr, 5);
    cout << endl;
    selection_sort_desc(arr1, 5);
}