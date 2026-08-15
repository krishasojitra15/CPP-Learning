#include <iostream>
#include <vector>
#include  <queue>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class solution{
    public:
    int search (vector<int> & inorder,int left, int right,int data){
        for(int i=left; i<=right; i++){
            if(inorder[i]= data){
                return i;
            }
        }
        return -1;
    }

    Node* helper(vector <int> & preorder , vector<int> & inorder,int&preIdx,int left, int right ){
        if(left>right){
            return NULL;
        }

        Node* root = new Node(preorder[preIdx]);
        preIdx++;

        int inIdx = search(inorder,left,right,preorder[preIdx]);
        root->left=helper(preorder,inorder,preIdx,left,inIdx-1);
        root->right=helper(preorder,inorder,preIdx,inIdx+1,right);
        return root;

    }

    Node* buildTree(vector <int> & preorder , vector<int> & inorder){
        int preIdx = 0;
        helper (preorder,inorder,preIdx,0, inorder.size()-1);
    }
};