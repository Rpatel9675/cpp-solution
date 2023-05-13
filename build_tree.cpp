#include"bits/stdc++.h"
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
Node* builttree(int preorder[], int inorder[], int start, int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int val= preorder[idx];
    idx++;
    
    Node* node= new Node(val);
    if(start==end){
        return node;
    }
    int odr= search(inorder, start, end, val);
    node->left=builttree(preorder, inorder,start, odr-1);
    node->right= builttree(preorder, inorder, odr+1, end);
}
void preor(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preor(root->left);
    preor(root->right);
    }
int main(){
    int preorder[]= {1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root = builttree(preorder, inorder, 0, 4);
    preor(root);
}