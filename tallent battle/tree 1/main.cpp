#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left ,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

void preorder(struct Node* node)
{
    if(node ==NULL)
        return;
        else{
    cout<<node->data<<endl;
    preorder(node->left);
    preorder(node->right);

        }

}
void inorder(struct Node* node)
{
    if(node ==NULL)
        return;
    inorder(node->left);
    cout<<node->data<<endl;
    inorder(node->right);
}
void postorder(struct Node* node)
{
    if(node ==NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<endl;
}
int main()
{
struct Node* root=new Node(10);
root->left=new Node(20);
root->right =new Node(30);

root->left->left=new Node(40);
root->left->right =new Node(50);

root->right->left=new Node(60);
root->right->right =new Node(70);

cout<<"inorder traveral";
inorder(root);
cout<<"preoder traveral";
preorder(root);
cout<<"postder traveral";
postorder(root);

    return 0;
}
