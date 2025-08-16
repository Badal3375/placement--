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
void levelbylevel(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }

        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

// Question -->2  find the  parent node of a given node in a binary tree
int findparent(node *root, int key, int &parent)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == key)
    {
        return parent;
    }
    int left_search = findparent(root->left, key, root->data);
    if (left_search != -1)
    {
        return left_search;
    }
    else
    {
        return findparent(root->right, key, root->data);
    }
}



// Question -->3 
// find the all leaf node in given binary tree
void findleaf(node *root){
    if(root= nullptr){
        return;
    }
    if(root->left == nullptr && root->right == nullptr){
        cout<<root->data<<" ";
        return ;
     }
    if(root->left){
        findleaf(root->left);
    }
    if(root->right){
        findleaf(root->right);
    }
}
int main()
{
    node *root = new node(23);
    root->left = new node(8);
    root->right = new node(18);
    root->left->left = new node(5);
    root->left->right = new node(11);
    root->left->right->left = new node(10);
    root->left->right->right = new node(13);
    root->left->right->right->left = new node(56);
    root->left->right->right->right = new node(58);
    levelbylevel(root);
    cout<< " level order"<<endl;
    int key = 18;
    int parent = -1;
    cout << findparent(root, key, parent) << endl;
    cout<<"  find the parent node"<<endl;
     
     
}