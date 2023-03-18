#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Node{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void leftview(Node *n)
{
    if (n == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(n);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *n = q.front();
            q.pop();

            if(i==0)
            {
                cout << n->data << " ";
            }
            if (n->left != NULL)
            {
                q.push(n->left);
            }
            if (n->right != NULL)
            {
                q.push(n->right);
            }
        }
    }
}
int main()
{
    Node* n = new Node(10);
    n->left = new Node(20);
    n->right = new Node(30);
    n->left->left = new Node(40);
    n->left->right = new Node(50);
    n->right->left = new Node(60);
    n->right->right = new Node(70);
    leftview(n);
    return 0;
}