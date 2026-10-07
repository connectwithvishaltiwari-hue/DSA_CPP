#include <iostream>
using namespace std;
class stack{
public:
    int top = -1;
    int st[10];
    void push(int n){
        if(top >= 10){
            cout << "index out of range";
        }
        top = top + 1;
        st[top] = n;
    }
    void topele(){
        if(top == -1){
            cout << "no elemenet";
        }
        cout << st[top];
    }
    void pop(){
        if (top == -1){
            cout << "index out of range";
        }
        top = top - 1;
    }
    void size(){
        int top1= top + 1;
        cout << top1;
    }
    void print(){
        for(int i = 0; i < top+1; i++){
            cout << st[i];
        }
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.topele();
    st.pop();
    st.topele();
    st.print();

}