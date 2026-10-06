#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {2,7,11,15};
    int target = 26;
    int n = arr.size();
    int i = 0;
    int j = n-1;
    while(i<=j){
        if((arr[i] + arr[j]) == target){
            cout << i << " " << j;
            break;
        }else if(arr[i] + arr[j] > target){
            j--;
        }else{
            i++;
        }
    }
}