#include<bits/stdc++.h>
using namespace std;
class Queue{
    int front,rear,size;
    int*arr;

    public:
    Queue(int size){
        //this.size=size;   size ko access krne ke liye
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void enqueue(int val){
        if(rear==size){
            cout<<"Queue overflow"<<endl;
            return;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;
    }
    int dequeue(){
        if(front==-1 || front>rear){
            cout<<"Queue underflow"<<endl;
            return -1;
        }
        int temp=arr[front];
        front++;
        return temp;
    }
    bool isEmpty(){
        if(front>-1 && front>rear){
            return true;
        }
            return false;
    }
    bool isFull(){
        if(rear==size){
            return true;
        }
        return false;
    }
    void display(){
    if(isEmpty()){
        cout<<"Queue underflow"<<endl;
        return;
    }
    for(int i=front;i<=rear;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
int main(){
     Queue q(5);
   q.enqueue(1);
   q.enqueue(2);
   q.enqueue(3);
   q.enqueue(4);
   q.enqueue(5);
   q.display();
   q.dequeue();
   q.display();
   q.enqueue(8);
   q.display();

}