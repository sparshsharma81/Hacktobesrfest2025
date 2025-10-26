#include<iostream>
using namespace std;
class Queue
{
  public:
    int front;
    int rear;
    int size;
    int *arr;
  public:
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

  void enqueue(int val){
    if(front>rear){
        cout<<"Queue is overflowed"<<endl;
        return;
    }
    if(front==-1){
        front=0;
    }
    rear++;
    arr[rear]=val;
    cout<<"Value has been inserted successfully!"<<endl;

  }

  void dequeue(){
    if(front==-1){
        cout<<"Queue is empty.Can't remove the element!"<<endl;
        return;
    }
    cout<<"Removed element is:\n"<<arr[front]<<endl;
    front++;
  }
  bool isEmpty(){
    if(front==-1 && front>rear){
        return true;
    }
    return false;
  }

  void display_queue(){
    if(isEmpty()){
        cout<<"queue is empty!"<<endl;
        return;
    }
    for(int i=front;i<rear;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
//applications- Graph,tree=> BFS
int main(){
   Queue que(5);
   que.enqueue(1);
   que.enqueue(2);
   que.enqueue(3);
   que.enqueue(4);
   que.enqueue(5);
   que.display_queue();
   que.dequeue();
   que.display_queue();
   que.enqueue(8);
   que.display_queue();
   //optimization=> with circular que
}