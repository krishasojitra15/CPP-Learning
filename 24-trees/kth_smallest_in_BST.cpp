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
int prevorder=0;
int kthsmallest(Node* root, int k){
    if(root==NULL){
        return -1;  
    }

    if(root->left !=NULL){
    int leftans = kthsmallest(root->left,k);
        if(leftans!=-1){
            return leftans;
        }
    }
    if(prevorder +1 ==k){
        return root ->data;
    }
    int preorder = preorder +1;
    if(root->right !=NULL){
    int rightans = kthsmallest(root->right,k);
        if(rightans!=-1){
            return rightans;
        }
    }
    return -1;
}
