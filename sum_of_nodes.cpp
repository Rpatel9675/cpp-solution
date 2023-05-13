#include"bits/stdc++.h"
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};

int countnodes(Node* root){
    
    if(root ==NULL){
        return 0;
    }
    return countnodes(root->left)+countnodes(root->right)+root->data;
}
int main(){
    Node* node= new Node(1);
    node->left=new Node(2);
    node->right=new Node(3);
    node->right->left=new Node(3);
    node->right->right=new Node(3);
    node->left->left=new Node(2);
    node->left->right=new Node(2);
    node->left->left->left=new Node(2);
    node->left->left->right=new Node(2);
    cout<<countnodes(node);
}