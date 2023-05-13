#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }

};
void insertNode(Node* &tail,int element, int data){
    if(tail==NULL){
        Node* newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node* curr=tail;
        while(curr->data != element) curr=curr->next;
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }

}
void print(Node* &tail){
    Node* curr=tail;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    } while (curr->next != tail);
    cout<<endl;
    
}
int main(){
    Node* ans=new Node(5);
    Node* tail=ans;
    insertNode(tail,5,4);
    print(tail);
    
}