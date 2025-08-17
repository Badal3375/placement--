#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node*right;

    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
int getLevel(node* root, int target, int level) {
    if (root == nullptr) {
        return -1;
    }

    // If the target key matches the current node's 
  	// data, return the level
    if (root->data == target) {
        return level;
    }

    // Recursively call for left and right subtrees
    int leftLevel = getLevel(root->left, target, level + 1);
    if (leftLevel != -1) {
        return leftLevel;
    }
    
    return getLevel(root->right, target, level + 1);
}
int main(){
  node *root = new node(12);
    root->left = new node(8);
    root->right = new node(18);
    root->left->left = new node(5);
    root->left->right = new node(11);
    root->left->right->left = new node(10);
    root->left->right->right = new node(13);
    int target = 12;

    int level = getLevel(root, target, 1);  
    cout<<level<<endl;
}