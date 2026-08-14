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
class solution {
    public: 
    Node* lowestcommonAncestor(Node* root ,Node* p,Node* q){
        if(root==NULL){
           return NULL;  
        }

        if(root->data == p->data || root->data == q->data){
            return root;
        }

        Node* leftLCA= lowestcommonAncestor(root->left,p,q);
        Node* rightLCA= lowestcommonAncestor(root->right,p,q);

        if(leftLCA && rightLCA){
            return root;
        }
        else if(leftLCA != NULL){
            return leftLCA;
        }else{
            return rightLCA;
        }
    }
};
int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Node* p = root->left->left;   // 4
    Node* q = root->left->right;  // 5

    solution obj;
    Node* ans = obj.lowestcommonAncestor(root, p, q);

    cout << "Lowest Common Ancestor: " << ans->data << endl;

    return 0;
}