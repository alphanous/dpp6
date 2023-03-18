#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node
{
    int data;
    struct Node *left, *right;
};
Node* makenode(int data)
{
    Node* n = new Node;
    n->data = data;
    n->left = n->right = NULL;
    return n;
}
void preorder(struct Node* n)
{
    if(n==NULL)
    {
        return;
    }
    cout<<n->data<<" ";
    preorder(n->left);
    preorder(n->right);
}
int main()
{
    struct Node* root = makenode(1);
    root->left = makenode(2);
    root->right = makenode(3);
    root->left->left = makenode(4);
    root->left->right = makenode(5);
    root->right->left = makenode(6);
    root->right->right = makenode(7);
    preorder(root);
    return 0;
}