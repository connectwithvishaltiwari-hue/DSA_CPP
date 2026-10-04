#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(int);
    int l = 0;
    int r = n-1;
    while(l<r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--; 
    }for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}