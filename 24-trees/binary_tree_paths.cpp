#include<iostream>
#include<vector>
#include<queue>
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

void allpaths(Node* root,string path,vector<string> & ans){
    if(root->left== NULL && root->right==NULL){
        ans.push_back(path);
        return;
    }
    if(root->left){
        allpaths(root->left,path+"->"+to_string(root->left->data),ans);
    }
    if(root->right){
        allpaths(root->left,path+"->"+to_string(root->right->data),ans);

    }

}

vector<string> binarytreepaths(Node* root){
        vector<string> ans;
        string path = to_string(root->data);

        allpaths(root,path,ans);
        return ans;
} 