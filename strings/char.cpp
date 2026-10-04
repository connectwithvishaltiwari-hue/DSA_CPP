#include <iostream>
using namespace std;
int main(){
    char ch = 'F';
    int pos = ch - 'A'; // starts from 0th index
    cout << pos << endl;
    // ascii vvalue of a = 97 & and A = 65
    char ch1 = 'A';
    cout << (int)ch1 << endl;
    // char array
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    char arr1[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
    cout << arr << endl << arr1 << endl;
    // in int array when we print arra it gives us address of first value but 
    // in char and string it gives all element of array

    // creating char array
    char work[] = "code";
    char work1[5] = "code";
    char work2[] = {'c', 'o', 'd', 'e', '\0'};
    char work3[50] = {'c','o','d','e', '\0'};
    cout << work << endl << work1 << endl << work2 << endl << work3 << endl;
    cout << strlen(work) << endl;

    // char input
    char word[10];
    cin >> word; // ignore all the letters after whitespace
    cout << word << endl;

    char sent[30];
    char sent1[30];
    cin.getline(sent, 30); //it resolve cin issue
    // if we want to stop when user ienter * then we use
    cin.getline(sent1, 30, '*'); // '*' - delimiter
    cout << sent << endl << sent1 <<endl;
}