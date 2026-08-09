#include <iostream>
#include <vector>
#include  <queue>
using namespace std;

class Node {
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data= val;
        left=right=NULL;
    }
};

static int idx= -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node *root = new Node(preorder[idx]);
    root ->left = buildTree(preorder);
    root ->right= buildTree(preorder);

    return root;
}

// height ofa tree
int height(Node* root){
    if(root == NULL){
        return 0;

    }
    int leftHt = height(root ->left);
    int rightHt = height(root->right);
    return max(leftHt,rightHt) +1;
}

// count Nodes
int count(Node* root){
    if(root == NULL){
        return 0;  
    }
    int leftcount = count(root ->left);
    int rightcount = count(root->right);
    return leftcount + rightcount +1;
}

// sum Nodes
int sum (Node*root){
    if(root==NULL){
        return 0;
    }
    int leftsum = sum(root->left);
    int rightsum = sum(root->right);
    return leftsum+ rightsum+root -> data;
}


int main() {
    vector<int> preorderdata = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorderdata);

    cout << "height : " << height(root) << endl;
    cout << "count: " << count(root) << endl;
    cout << "sum: " << sum(root) << endl;
    
    return 0;
}