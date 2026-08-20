#include<iostream>
#include<vector>
#include<queue>
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
  Node* nextright = NULL;
void flatten(Node* root){
    if(root== NULL){
        return;
    }

    flatten(root->right);
    flatten(root->left);

    root->left = NULL;
    root->right =nextright;
    nextright= root;

}