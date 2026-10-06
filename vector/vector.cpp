#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vect1(10, -1);
    cout << vect1.size() << "\n";

    for(int i = 0; i < vect1.size(); i++){
        cout << vect1[i] << " ";
    }
}