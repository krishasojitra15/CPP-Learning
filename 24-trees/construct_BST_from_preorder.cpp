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
Node* helper(vector<int>&preorder, int &i,int bound){
    if(i>=preorder.size() || preorder[i] >bound){
        return NULL;
    }
    Node* root = new Node(preorder[i++]);
    root->left = helper(preorder,i,root->data);
    root->right = helper(preorder,i,bound);
    return root;
}

Node* bstfrompreorder(vector<int> & preorder){
    int i=0;
    return helper(preorder,i,INT_MAX);
}
