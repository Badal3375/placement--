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
        node*temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=nullptr)
        q.push(temp->left);
        if(temp->right!=nullptr)
        q.push(temp->right);
        
        

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
}