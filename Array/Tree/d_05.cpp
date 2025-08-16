#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;

    node(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }

};
// Function to insert a new node with given data in BST
//using level by level approach

// Question ->1

void levelbylevel(node*root){
    if(root==nullptr)
    return ;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node*curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=nullptr)
        q.push(curr->left);
        if(curr->right!=nullptr)
        q.push(curr->right);
        
        

    }
}

// Question ->2
// how to find the heigth in tree 
int height(node*root){
    if(root==nullptr){
        return 0;
    }
    int left_heigth=height(root->left);
    int right_heigth=height(root->right);
    int ans ;
     ans =max(left_heigth,right_heigth)+1 ;
     return ans ;
}

// Question ->3
// how to find the  element present in the tree or not
bool search(node*root,int key){
    if(root==nullptr)
    return false;
    if(root->data==key){
        return true;
    }
    bool res1 = search(root->left, key);
    bool res2 = search(root->right, key);

    // node found, no need to look further
    if (res1) 
    {
        return true;
    } 

    // node is not found in left, 
    // so recur on right subtree
     else{
        return res2 ;
     }
    
}
int main(){
    node *root = new node(12);
    root->left = new node(8);
    root->right = new node(18);
    root->left->left = new node(5);
    root->left->right = new node(11);
    root->left->right->left=new node(10);
    root->left->right->right=new node(13);
    root->left->right->right->left=new node(56);
    root->left->right->right->right=new node(58);

      levelbylevel(root);
      cout<<endl;
      cout<<"the height of tree is "<<height(root)<<endl;

      int key=100;
      cout<<"is key present in tree "<<search(root,key)<<endl;
}