#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

// Question -->1 Insertion in a Binary Tree in level order
// Insertion in a Binary Tree in level order
// Insertion in a Binary Tree in level order
node *InsertNode(node *root, int data)
{

    // If the tree is empty, assign new
    // node address to root
    if (root == nullptr)
    {
        root = new node(data);
        return root;
    }

    // Else, do level order traversal until we find an empty
    // place, i.e. either left child or right child of some
    // node is pointing to NULL.
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {

        // Fron a front element in queue
        node *curr = q.front();
        q.pop();

        // First check left if left is null
        // insert node in left otherwise chaeck for right
        if (curr->left != nullptr)
            q.push(curr->left);
        else
        {
            curr->left = new node(data);
            return root;
        }
         //   rigth side insertion
        if (curr->right != nullptr)
            q.push(curr->right);
        else
        {
            curr->right = new node(data);
            return root;
        }
    }
}

// Inorder traversal of a binary tree
void inorder(node *curr)
{
    if (curr == nullptr)
        return;
    inorder(curr->left);
    cout << curr->data <<' ';
    inorder(curr->right);
}
int main()
{
    node *root = new node(12);
    root->left = new node(8);
    root->right = new node(18);
    root->left->left = new node(5);
    root->left->right = new node(11);
    root->left->right->left = new node(10);
    root->left->right->right = new node(13);
    int data = 15;
    InsertNode(root, data);
    inorder(root);
}