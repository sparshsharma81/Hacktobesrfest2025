#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data=0){
        this->data=data;
        next=nullptr;  
    }
    public:
    Node*createnode(vector<int>vec){
        Node*head=new Node(vec[0]);
        Node*t=head;
        int n=vec.size();
        for(int i=1;i<n;i++){
            Node*temp=new Node(vec[i]);
            t->next=temp;
            t=temp;
        }
        return head;
    }
    void result(Node*head){
        cout<<"Printing Linkedlist"<<endl;
        Node*p=head;
        while(p!=nullptr){
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }
    Node* insert(Node*head){
        cout<<"Enter any number"<<endl;
        int n;
        cin>>n;
        cout<<"Enter position"<<endl;
        int pos;
        cin>>pos;
       int count=0;
    if(head!=nullptr){
        count++;
    }
    Node*r=head;
    while(r->next!=nullptr){
        count++;
        if(count==pos){
            break;
        }
        r=r->next;
    }
   // 1 2 3 4 5 6 
   // temp=2 wale data pe hai;
    Node *t=r->next; //store 
    r->next=NULL;        //break the bond
    r->next=new Node(n); // insert
    r=r->next;       
   // 1 2 7    3 4 5 6
        r->next=t; // connect both the list
   // 1-> 2-> 7-> 3-> 4-> 5-> 6
   return head;
}
};
int main(){
    Node a(0);
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    Node*head=a.createnode(vec);
    a.result(head);
    Node*q=a.insert(head);
    a.result(q);

}
