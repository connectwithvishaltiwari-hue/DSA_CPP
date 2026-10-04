#include <bits/stdc++.h>
using namespace std;
void kadens_algo(int arr[], int n){
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++){
        curr_sum+=arr[i];
        max_sum = max(max_sum, curr_sum);
        if (curr_sum < 0){
            curr_sum = 0;
        }
    }cout << max_sum;
}
int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    kadens_algo(arr, 6);
}