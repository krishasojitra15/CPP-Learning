#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#include<algorithm>
using namespace std;

class Node {
    public: 
    Node* nextright = NULL;
    int data;
    Node* left;
    Node* right;
    Node* next;
    Node(int val){
        data= val;
        left=right=NULL;
    }
};

Node* lowestcommonAncestor(Node* root,Node* p , Node* q){
    if(root==NULL){
        return NULL;
    }

    if(root->data >p->data && root->data > q->data){
        return lowestcommonAncestor(root->left,p,q);
    }else if(root->data < p->data && root->data < q->data){
        return lowestcommonAncestor(root->right,p,q);

    }else{
        return root;
    }
}