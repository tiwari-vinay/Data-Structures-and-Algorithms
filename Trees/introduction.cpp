#include<bits/stdc++.h>
using namespace std;

class Tree{
    public:
        int data;
        Tree *left, *right;

        Tree(int data)
        {
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

void indorder(Tree *root)
{
    if(root==NULL)
        return;
    indorder(root->left);
    cout<<root->data<<" ";
    indorder(root->right);
}

void preorder(Tree *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    indorder(root->left);
    indorder(root->right);
}

void postorder(Tree *root)
{
    if(root==NULL)
        return;
    indorder(root->left);
    indorder(root->right);
    cout<<root->data<<" ";
}

void bfs(Tree *root,int key)
{
    queue<Tree*> q;
    q.push(root);

    while(!q.empty())
    {
        // we need to move till we get the rightmost node
        Tree *cur = q.front();
        q.pop();
        if(cur == NULL)
            return ;
        if(root->left == NULL)
            return root;
        bfs(root->left);
        if(root->right==NULL)
            return root;
        dfs(root->right);
    }
}

int main()
{
    Tree *root = new Tree(10);
    root->left = new Tree(11);
    root->left->left = new Tree(7);
    root->left->right = new Tree(12);
    root->right = new Tree(9);
    root->right->left = new Tree(15);
    root->right->right = new Tree(8);


    indorder(root);

    DeleteNode(root,11);

    indorder(root);
    return 0;
}
