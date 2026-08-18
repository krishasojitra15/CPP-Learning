#include<iostream>
#include<vector>
#include<queue>
#include <algorithm>
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

int widthofBinaryTree(Node* root){
    queue<pair<Node* ,unsigned long long>> q;
    q.push({root,0});
    int maxwidth=0;

    while(q.size()>0){
        int currlevelsize = q.size();
        unsigned long long stIdx =q.front().second;
        unsigned long long endIdx = q.back(). second;

        maxwidth = max(maxwidth,(int)(endIdx-stIdx+1));

        for(int i=0; i<currlevelsize;i++){
            auto curr= q.front();
            q.pop();

            if(curr.first->left){
                q.push({curr.first->left,curr.second*2+1});
            }

            if(curr.first->right){
                q.push({curr.first->right,curr.second*2+2});
            }
        }
    }
    return maxwidth;
};