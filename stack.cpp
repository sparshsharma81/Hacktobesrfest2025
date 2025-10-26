#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *arr;
    int top;
    int capacity;
    public:
    Stack(int size){
        capacity=size;
        arr=new int [capacity];
        top=0;
    }
    void push(int x){
        if(top==capacity){
            cout<<"Stack Overflow";
            return;
        }
        arr[top]=x;
        cout<<arr[top]<<endl;
        top++;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        int m=arr[top-1];
         top--;
        cout<<"Removed element:"<<m;
    }
    int gettop(){
        return arr[top-1];
    }
};
int main(){
   Stack st(6);
   st.push(1);
   st.push(2);
   cout<<"Top Element"<< st.gettop()<<endl;
   st.pop();
}