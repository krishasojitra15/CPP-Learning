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
Node* helper(vector<int> & nums,int st, int end){
    if(st> end){
        return NULL;
    }
    int mid = st +(end-st)/2;
    Node* root= new Node(nums[mid]);

    root->left = helper(nums,st,mid-1);
    root->right= helper(nums,mid+1,end);

    return root;

}
Node* sortedarraytoBST(vector<int> & nums){
    return helper(nums,0,nums.size()-1);
}
