#include <bits/stdc++.h>
using namespace std;
bool valid_palindrom(char word[], int n){
    int st = 0;
    int end = n-1;
    while(st < end){
        if(word[st]!=word[end]){
            return false;
        }
        st++;
        end--;
    }return true;
}
int main(){
    char word[] = "raecar";
    int t = valid_palindrom(word, strlen(word));
    if(t == 0){
        cout << "not palindrom";
    }else{
        cout << "valid palindrom";
    }
}