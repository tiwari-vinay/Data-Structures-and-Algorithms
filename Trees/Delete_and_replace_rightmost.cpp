#include<bits/stdc++.h>
using namespace std;

class Tree{
    public:
    int data;
    Tree *right,*left;
    Tree(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void bfs(Tree *root)
{
    queue<Tree*> q;
    q.push(root);

    while(!q.empty())
    {
        Tree *tmp = q.front();
        q.pop();

        if(tmp==NULL)
            return;
        if(tmp!=NULL)
            cout<<tmp->data<<" ";
        if(tmp->left)
            q.push(tmp->left);
        if(tmp->right)
            q.push(tmp->right);
    }
}

void printLeaf(Tree *root)
{
    if(root==NULL)
        return ;
    queue<Tree*> q;
    q.push(root);
    while(!q.empty())
    {
        Tree *tmp = q.front();
        q.pop();
        if(tmp->left==NULL && tmp->right==NULL)
            cout<<tmp->data;
        if(tmp->left)        
            q.push(tmp->left);
        if(tmp->right)
            q.push(tmp->right);
    }
}

void find_DeepestNode(Tree *root,int cur_level,int level,int &val)
{
    if(root==NULL)
        return ;
    if(level>cur_level)
    {
        cur_level=level;
        val=root->data;
    }
    find_DeepestNode(root->left,cur_level,level++,val);
    find_DeepestNode(root->right,cur_level,level++,val);

}
// void getDeepest_Left_Node(Tree* root)
// {
//     // what should be the plan of action for this?
//     if(root==NULL)
//         return ;
//     queue<Tree*> q;
//     q.push(root);
//     while(!q.empty())
//     {
//         Tree *tmp = q.front();
//         q.pop();
//         if(tmp->left==NULL && tmp->right==NULL)
//         {
//             cout<<tmp->data;
//             return ;
//         }
//         if(tmp->left)        
//             q.push(tmp->left);
//         if(tmp->right)
//             q.push(tmp->right);
//     }
// }

int main()
{
    Tree *root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);
    // root->right->left = new Tree(6);
    // root->right->right = new Tree(7);

    // bfs(root);
    // printLeaf(root);
    int val = -1;
    find_DeepestNode(root,0,-1,val);
    cout<<val;

    return 0;
}