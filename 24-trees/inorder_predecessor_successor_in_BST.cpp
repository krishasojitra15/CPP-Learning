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
    Node* left=NULL;
    Node* right=NULL;
    Node* next;
    Node(int val){
        data= val;
        left=right=NULL;
    }
};

Node* rightmostvalueinleftsubtree(Node* root){
    Node* ans= NULL;
    while(root!= NULL){
        ans = root;
        root = root->right;
    }
    return ans;
}

Node* leftmostinrightsubtree(Node* root){
    Node* ans= NULL;
    while(root!= NULL){
        ans = root;
        root = root->left;
    }
    return ans;
}

vector<int> getpredsucc(Node* root, int key){
    Node* curr= root;
    Node* pred = NULL;
    Node* succ = NULL;

    while(curr!=NULL){
        if(key < curr->data){
            succ = curr;
            curr = curr->left;
        }else if(key > curr->data){
            pred = curr;
            curr = curr->right;
        }else{

            if(curr->left != NULL){
                pred=rightmostvalueinleftsubtree(curr->left);

            }
            if(curr->right != NULL){
                succ = leftmostinrightsubtree(curr->right);
            }
            break;
        }
        
    }
    return {
    pred ? pred->data : -1,
    succ ? succ->data : -1
};
}

int main(){

    Node* root = new Node(6);

    root->left = new Node(4);
    root->right = new Node(8);

    root->left->left = new Node(2);
    root->left->right = new Node(5);

    root->right->left = new Node(7);
    root->right->right = new Node(9);

    int key = 7;

    vector<int> ans = getpredsucc(root, key);

    cout << "predecessor: " << ans[0] << endl;
    cout << "successor: " << ans[1] << endl;

    return 0;
}