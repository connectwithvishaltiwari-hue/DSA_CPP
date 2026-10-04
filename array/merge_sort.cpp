#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low, i <= high; i++){
        arr[i] = temp[i-low];
    }
}
void ms(vector<int> &arr, int low, int high){
    if(low==high) return;
    int mid = (low + high)/2;
    ms(arr, low, mid);
    ms(arr, mid+1, high);
    merge(arr, low, mif, high);
}
int main() {

    vector<int> arr = {5, 2, 4, 1, 3};

    int n = arr.size();

    ms(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}