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

Node* insert (Node*root , int val){
    if(root==NULL){
        return new Node(val);   
    }

    if(val < root-> data){
        root->left = insert(root->left,val);
    }else{
        root->right = insert(root->right,val);
    }
}

Node* buildBST(vector<int> arr){
    Node* root = NULL;

    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}

void inorder(Node* root){
    if(root== NULL){
        return ;
    }
    inorder(root->left);
    cout << root-> data <<" ";
    inorder(root->right);
}
Node* getinordersuccessor(Node* root){
    while(root != NULL && root-> left != NULL){
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root,int key){
    if(root==NULL){
        return NULL;
    }

    if(key<root->data){
        root->left=delNode(root->left,key);
    }else if(key>root->data){
        root->right = delNode(root->right,key);
    }else{
        if(root->left == NULL){
            Node* temp= root-> right;
            delete root;
            return temp;
        }else if (root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }else{
            Node* IS = getinordersuccessor(root->right);
            root->data= IS->data;
            root->right=delNode(root->right,IS->data);
            
        }
        return root;
    }
}
int main(){
    vector<int > arr= {3,2,1,5,6,4};

    Node* root=buildBST(arr);
    cout<< " before: ";
    inorder(root);
    cout<< endl;
    root=delNode(root,6);
    cout<< " after: ";
    inorder(root);
    cout<< endl;
    return 0;
}