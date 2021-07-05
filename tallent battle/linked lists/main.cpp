#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node* next;
};
int main()
{
    node* head;
    node* a=NULL;
    node* b=NULL;
    node* c=NULL;
    node* d=NULL;

    a=new node();
    b=new node();
    c=new node();
    d=new node();

    a->data=10;
    b->data=20;
    c->data=30;
    d->data=50;

    head=a;
    a->next=b;
    b->next=d;
    d->next=c;
    c->next=NULL;

     while(head!=NULL)
     {
         cout<<head->data<<endl;
         head=head->next;
     }
     return 0;

}
