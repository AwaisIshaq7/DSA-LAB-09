#include <iostream>
using namespace std;
struct TreeNode
{
    int info;
    TreeNode* left;
    TreeNode* right;
};


TreeNode* createNode(int data)
{
    TreeNode* newNode = new TreeNode;
    newNode->info = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void preorder(TreeNode* root) 
{
    if (root != nullptr) {
        cout << root->info << " ";  
        preorder(root->left);       
        preorder(root->right);      
    }
}

// In-order traversal
void Inorder(TreeNode* root) 
{
    if (root != nullptr) {
        Inorder(root->left);        
        cout << root->info << " "; 
       Inorder(root->right);       
    }
}
void postorder(TreeNode* root) {
    if (root != nullptr) {
        postorder(root->left);      
        postorder(root->right);    
        cout << root->info << " ";  
    }
}

int main() {       //To Use the above struct and functions.
    
    TreeNode* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);

    cout << "Pre Order Traversal: ";
    preorder(root);
    cout << endl;

    cout << "In Order Traversal: ";
    Inorder(root);
    cout << endl;

    cout << "Post Order Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
    