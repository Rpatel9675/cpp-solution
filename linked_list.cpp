#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;

    }

};
void inserttolast(node* &head, int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!= NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}
bool search(node* head, int key){
    node* temp = head; 
    while(temp!= NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    
    }
    
    return false;
}
void inserttohead(node* &head, int val){
    node* n= new node(val);
    n->next = head;
    head=n;

}
int main(){
    node* head= NULL;
    inserttolast(head,2);
    inserttolast(head,7);
    inserttolast(head,9);
    display(head);
    cout<<search(head, 1);
    inserttohead(head,1);
    cout<<search(head, 1);
    display(head);

    return 0;

}