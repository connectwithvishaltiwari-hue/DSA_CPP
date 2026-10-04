#include <bits/stdc++.h>
using namespace std;
// void max_subarray_sum(int arr[], int n){
//     int maxSum = INT_MIN; // int min = likely - infinity
//     for (int start = 0; start<n; start++){
//         for (int end = start; end < n; end++){
//             int sum = 0;
//             for (int i = start; i <= end; i++){
//                 sum += arr[i];
//             }
//             cout << sum << " ";
//             maxSum = max(maxSum, sum);
//         }
//         cout << endl;
//     }
//     // cout << maxSum;
// }

// litle bit optimize
void max_subarray_sum_optim(int arr[], int n){
    int maxSum = INT_MIN; // int min = likely - infinity
    for (int start = 0; start<n; start++){
        int curr_sum = 0;
        for (int end = start; end < n; end++){
            curr_sum+=arr[end];
            maxSum = max(maxSum, curr_sum);
        }
    }
    cout << maxSum;
}
int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    // max_subarray_sum(arr, n);
    max_subarray_sum_optim(arr, n);
}