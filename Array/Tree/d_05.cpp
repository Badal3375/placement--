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
int main(){
    node *root = new node(12);
    root->left = new node(8);
    root->right = new node(18);
    root->left->left = new node(5);
    root->left->right = new node(11);
    root->left->right->left=new node(10);
      levelbylevel(root);
}