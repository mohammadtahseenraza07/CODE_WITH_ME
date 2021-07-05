#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left ,*right;

};
struct Node *newNode(int data)
{
    struct Node *node=(struct Node *)malloc(sizeof(struct Node));
    node->data=data;
    node->right=node->left=NULL;
    return node;
};
bool isfullbinary(struct Node *root)
{
    if(root==NULL)
        return true;
    if((root->left==NULL)&&(root->right==NULL))
        return true;
    if((root->left)&&(root->right))
        return(isfullbinary(root->left)&& isfullbinary(root->right));

               return false;
}
int main()
{
    struct Node *root =NULL;
    root=newNode(10);
    root->left=newNode(20);
    root->right=newNode(30);
    root->right->right  =newNode(30);

    if(isfullbinary(root))
        cout<<"full binary tree";
    else
        cout<<"not full binary tree";
}


