#include <iostream>

struct Node {
    struct Node *left;
    struct Node *right;
    int val;
    Node(int c):val(c), left=NULL, right=NULL;
};

Node* invertBinaryTree(Node* root) {
    if(root==NULL) return NULL;
    invertBinaryTree(root->left);
    invertBinaryTree(root->right);
    Node *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    return root;
}
