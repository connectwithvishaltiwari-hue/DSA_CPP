#include <iostream>
using namespace std;

int diagonalsum(int mat[100][100], int c){
    int sum = 0;
    int j = c-1;
    for(int i = 0; i < c; i++){
        sum += mat[i][i];
        if(i!=j){
            sum+=mat[i][j];
        }j--;
    }return sum;
}

int main(){
    int r;
    int c;
    cin >> r;
    cin >> c;
    int arr[100][100];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    cout << diagonalsum(arr, r);
}