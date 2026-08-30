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
    Node* next;
    Node(int val){
        data= val;
        left=right=NULL;
    }
};

Node* connect(Node* root){
    if(root == NULL || root->left == NULL){
        return root;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    Node* prev = NULL;

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        if(curr==NULL){
            if(q.size()==0){
                break;
            }
            q.push(NULL);

        }else{
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
            if(prev!= NULL){
                prev->next = curr;
            }
        }
        prev = curr;
    }
    return root;
}