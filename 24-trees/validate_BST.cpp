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

bool helper(Node* root, Node*min,Node* max){
    if(root=NULL){
        return true;
    }

    if(min!= NULL&& root->data<= min->data){
        return false;
    }
    if(max!= NULL && root->data >= max->data){
        return false;
    }

    return helper(root->left,min,root) && helper(root->right,root,max);

}

bool isvalidBST(Node* root){
    return helper(root,NULL,NULL);
}