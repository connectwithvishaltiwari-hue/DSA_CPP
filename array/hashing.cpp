#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin >> n;
    // int arr[10];
    // for(int i = 0; i< n; i++){
    //     cin >> arr[i];
    // }
    // int hash[10000] = {0};
    // for(int i = 0; i <n; i++){
    //     hash[arr[i]] +=1 ;
    // }

    // int q;
    // cin >> q;
    // while(q--){
    //     int number;
    //     cin >> number;
    //     cout << hash[number] << endl;
    // }

    // string s;
    // cin >> s;
    // int hash[256] = {0};
    // for(int i = 0; i < s.size(); i++){
    //     hash[s[i]]++;
    // }

    // int q;
    // cin >> q;
    // while(q--){
    //     char c;
    //     cin >> c;
    //     cout << hash[c] << endl;
    // }
    
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // map<int, int> mpp;
    // for(int i = 0; i < n; i++){
    //     mpp[arr[i]]++;
    // }

    // // iterate in the map  - >stored in sorted order
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }
    // int q;
    // cin >> q;
    // while(q--){
    //     int number;
    //     cin >> number;
    //     cout << mpp[number] << endl;
    // }


    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    // iterate in the map  - >stored in sorted order
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
}