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
        Node*temp=new Node(n);
        // temp->next=head;
        // head=temp;
        Node*p=head;
        while(p->next!=nullptr){
            p=p->next;
        }
        p->next=temp;
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
