#include <bits/stdC++.h>
using namespace std;

// c++ strings are objects of pre-defined string class in STL
// c++ strings have useful member functions.
// c++ strings are dynamic (their size can change at run time).
// c++ strings support operators lie +, = =, <, >, etc;
// c++ strings are stored contiguously in memory.
int main(){
    string str1 = "hello";
    cout << str1;
    str1 = "Yellow"; // reassign
    cout << endl << str1;
    string str;
    cout << endl;
    // cin >> str;
    getline(cin ,str);
    cout << str << endl;
    cout << str[0];
    cout << str[1];

    // normal loop
    for(int i = 0; i < str.length(); i++){
        cout << str[i] << "-";
    }cout << "\n";
    // for each loop;
    for(char ch : str){
        cout << ch << ",";
    }
    cout << endl;
    return 0;
}