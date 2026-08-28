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

    Node(int val){
        data= val;
        left=right=NULL;
    }
};

Node* previous = NULL;
Node* first = NULL;
Node* sec = NULL;

void inorder(Node* root){
    if(root==NULL){
        return;   
    }

    inorder(root->left);

    if(previous != NULL && previous->data > root->data){
        if(first==NULL){
            first=previous;
        }
        sec = root;
    }
    previous = root;
    inorder(root->right);
}

void recoverTree(Node* root){
    inorder(root);

    int temp = first->data;
    first->data = sec->data;
    sec->data = temp;

}

