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

class Info{
    public: 
    int min,max,sz;
Info(int mi,int ma, int size){
        min=mi;
        max= ma;
        sz=size;
    }
};

Info helper(Node* root){
    if(root==NULL){
        return Info(INT_MAX,INT_MIN,0);
    }

    Info left = helper(root->left);
    Info right = helper(root->right);

    if(root-> data > left.max && root-> data < right.min){
        int currmin = min(root->data, left.min);
        int currmax = max(root->data, right.max);
        int currsz = left.sz + right.sz +1;

        return Info(currmin,currmax,currsz);
    }
    return Info(INT_MIN,INT_MAX,max(left.sz,right.sz));
}

int largestBSTinBT(Node* root){
    Info info = helper(root);
    return info.sz;
}

int main(){

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(50);
    cout << largestBSTinBT(root) << endl;
    return 0;

}