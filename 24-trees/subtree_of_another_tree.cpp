#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = NULL;
    }
};

bool isIdentical(Node* p, Node* q) {
    if (p == NULL || q == NULL) {
        return p == q;
    }

    return p->val == q->val &&
           isIdentical(p->left, q->left) &&
           isIdentical(p->right, q->right);
}

bool isSubtree(Node* root, Node* subtree) {
    if (root == NULL || subtree == NULL) {
        return root == subtree;
    }

    if (root->val == subtree->val &&
        isIdentical(root, subtree)) {
        return true;
    }

    return isSubtree(root->left, subtree) ||
           isSubtree(root->right, subtree);
}