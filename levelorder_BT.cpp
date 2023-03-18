#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
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
void levelorder(Node* n)
{
    if(n==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(n);
    while(!q.empty())
    {
        Node* n = q.front();
        cout<<n->data<<" ";
        q.pop();

        if(n->left!=NULL)
        {
            q.push(n->left);
        }
        if(n->right!=NULL)
        {
            q.push(n->right);
        }
    }
}
int main()
{
    Node* n = makenode(10);
    n->left = makenode(20);
    n->right = makenode(30);
    n->left->left = makenode(40);
    n->left->right = makenode(50);
    n->right->left = makenode(60);
    n->right->right = makenode(70);
    levelorder(n);
    return 0;
}