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
int mindiffinBST(Node* root){
    if(root==NULL){
        return INT_MAX;
    }
    int ans= INT_MAX;
    if(root->left != NULL){
        int leftMin = mindiffinBST(root->left);
        ans = min(ans,leftMin);
    }
    if(previous != NULL){
        ans = min(ans,root->data-previous->data);
    }
    previous = root;

    if(root->right != NULL){
        int rightMin = mindiffinBST(root->right);
        ans = min(ans,rightMin);
    }
    return ans;
}