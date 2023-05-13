#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        if(next != NULL) {
            delete next;
            next=NULL;
        }
    }
};
void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
void insertAtHead(Node* &head, int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &tail, int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtPosition(Node* &tail,Node* &head, int position, int data){
    if(position==1) {
        insertAtHead(head, data); 
        return;
        }
    Node* temp=head;
    Node* insert=new Node(data);
    position--;
    while(position--){
        temp=temp->next;
    }
    if(temp->next==NULL) 
    {
        insertAtTail(tail, data); 
        return;
    }
    insert->next=temp->next;
    temp->next->prev=insert;
    temp->next=insert;
    insert->prev=temp;
    

}
void DeleteatHead(Node* &head,int position){
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        position--;
        while (position--)
        {
            prev=curr;
            curr=curr->next;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

        
    }
    

}
int main(){
    Node* ans=new Node(10);
    Node* head=ans;
    Node* tail=ans;
    print(head);
    insertAtHead(head,20);
    print(head);
    insertAtTail(tail, 50);
   // print(tail);
    print(head);
    insertAtPosition(tail,head, 2,30);
    print(head);
    insertAtPosition(tail,head, 2,70);
    print(head);
    DeleteatHead(head,6);
    print(head);
}