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
    Node* delbeg(Node*head){
        Node*p=head;
        head=head->next;
        p->next=nullptr;
        delete p;
    return head;
    }
    Node* del(Node*head){
        Node*p=head->next;
        Node*t=head;
        while(p->next!=nullptr){
            {
                t=t->next;
                p=p->next;
            }
            t->next=nullptr;
            delete p;
            return head;
        }
    }
    Node* deletemid(Node*head){
         Node*p=head;
        int count=1;
        int pos;
        cout<<"Enter position";
        cin>>pos;
        while(count<(pos-1)){
            p=p->next;
            count++;
        }
        Node*t=p->next;
        p->next=t->next;
        t->next=nullptr;
        delete t;
        return head ;
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
   // Node*q=a.delbeg(head);
    //Node*q=a.del(head);
    Node*q=a.deletemid(head);
    a.result(q);

    

}
