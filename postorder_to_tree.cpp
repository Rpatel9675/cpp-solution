#include"bits/stdc++.h"
using namespace std;
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data= val;
        left= NULL;
        right=NULL;
    }
};*/
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right= NULL;

    }
};
   
int search(int inorder[], int start, int end, int val){
    for(int i=0; i<=end; i++){
        if(inorder[i]==val)
        return i;
    }
    return -1;
}

Node* builttree(int postorder[], int inorder[], int start,int end ){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    int val= postorder[idx];
    idx--;
    Node* curr= new Node(val);
    if(start==end){
        return curr;
    }
    int pos= search(inorder, start, end, val);
    curr->right=builttree(postorder, inorder, pos+1, end);
    curr->left= builttree(postorder, inorder, start, pos-1);
    return curr;
}
void postprint( Node* root){
    if(root==NULL){
        return;
    }
    postprint(root->left);
    cout<<root->data<<" ";

    postprint(root->right);

}
int main(){
    int posorder[]= {4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root = builttree(posorder, inorder, 0, 4);
    postprint(root);
}
