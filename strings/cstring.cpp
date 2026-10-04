#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // strcpy
    char str1[100];
    char str2[100] = "helow world";
    strcpy(str1, "apnacollege");
    cout << str1 << endl;
    strcpy(str1, str2);
    cout << str1 << endl;

    // strcat
    char str3[100] = "abc";
    char str4[100] = "xyz";
    strcat(str3, str4);
    cout << str3 << endl;
    return 0;

    // strcmp
    char str5[100] = "abc";
    char str6[100] = "abc";
    cout << strcmp(str5, str6) << endl;
    return 0;
}