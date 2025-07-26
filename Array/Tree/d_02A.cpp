#include <iostream>
#include <queue>
using namespace std;
struct node
{
    int data;
    node *left;
    node *rigth;
    node(int x)
    {
        data = x;
        left = rigth = nullptr;
    }
};
// Returns height which is the number of edges
// along the longest path from the root node down 
// to the farthest leaf node.
int max_height(node*root){
     
     
    if(root==nullptr){
        return -1;
    }
    int Rheight=max_height(root->rigth);
    int Lheight=max_height(root->left);
    int height=max(Lheight,Rheight)+1;
}


//Question ->1 insertion of tree using queue or level by level approch 
node* insertion_element(node*root,int key){
     
    if(root==nullptr){
        root=new node(key);
        return root;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        if (curr->left != nullptr)
            q.push(curr->left);
        else {
            curr->left = new node(key);
            return root;
        }
	
        if (curr->rigth != nullptr)
            q.push(curr->rigth);
        else {
            curr->rigth = new node(key);
            return root;
        }
    }
}

void inorder(node* curr) {
    if (curr == nullptr)
        return;
    inorder(curr->left);
    cout << curr->data << ' ';
    inorder(curr->rigth);
}
// Question ->2 deletion of tree using queue or level by level approch
int main()
{
    int data;
    node *root = new node(1);
    root->left = new node(2);
    root->rigth = new node(5);
    root->left->left = new node(4);
    root->left->rigth = new node(5);
    root->rigth->left = new node(10);
   // root->rigth->left->left = new node(10);
   // root->rigth->rigth = new node(11);
   // root->rigth->rigth->rigth = new node(22);
   // root->rigth->rigth->left = new node(21);
   // root->rigth->rigth->left->left = new node(51);
   // root->rigth->rigth->left->rigth = new node(11);
    int key=100;
    root=insertion_element(root,key);
    inorder(root);
}