#include <bits/stdc++.h>
using namespace std;
int main(){
    int student[3][3] = {{100, 100, 100},
                         {85, 74, 89},
                         {63, 72, 65}};
    cout << student[1][1] << endl;
    // input array 2d array
    int arr[3][4];
    int n = 3, m = 4;
    for (int i = 0; i < n; i++){ // rows
        for(int j = 0; j < m; j++){ // colmn
            cin >> arr[i][j];
        }
    }
    // row-wise travers;
    for (int i = 0; i < n; i++){ // rows
        for(int j = 0; j < m; j++){ // colmn
            cout << arr[i][j] << " ";
        }
    }
    // coln-wise travers;
    for (int i = 0; i < m; i++){ // rows
        for(int j = 0; j < n; j++){ // colmn
            cout << arr[i][j] << " ";
        }
    }
    return 0;
     
}