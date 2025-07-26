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
//   inoderTravesal  of tree
void inoderTravesal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inoderTravesal(root->left);
    cout << root->data << " ";
    inoderTravesal(root->rigth);
}
//  preorderTravesal of tree
void preorderTravesal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderTravesal(root->left);
    preorderTravesal(root->rigth);
}
// postorderTravesal of tree
void postorderTravesal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderTravesal(root->left);
    postorderTravesal(root->rigth);
    cout << root->data << " ";
}

// level by level Travesal of tree
void levelBylevel(node *root)
{

    if (!root)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left)
            q.push(curr->left);
        if (curr->rigth)
            q.push(curr->rigth);
    }
}
int main()
{
    int data;
    node *root = new node(1);
    root->left = new node(2);
    root->rigth = new node(5);
    root->left->left = new node(4);
    root->left->rigth = new node(5);
    root->rigth->left = new node(10);
    root->rigth->left->left = new node(10);
    root->rigth->rigth = new node(11);
    root->rigth->rigth->rigth = new node(22);
    root->rigth->rigth->left = new node(21);

    inoderTravesal(root);
    cout << endl;
    cout << "inoderTravesal" << endl;
    preorderTravesal(root);
    cout << endl;
    cout << "preorderTravesal " << endl;
    postorderTravesal(root);
    cout << endl;
    cout << "postorderTravesal " << endl;
    cout << endl;
    cout << "level by level Travesal " << endl;
    levelBylevel(root);
}