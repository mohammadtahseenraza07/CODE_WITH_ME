#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
}*first=NULL;
void create(int a[],int n)
{
    struct node *t,*last;
    first=(struct node *)malloc(sizeof (struct node));
    first->data=a[0];
    first->next=NULL;
    t=(struct node *)malloc(sizeof (struct node));
    for(int i=0;i<n;i++)
    {
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void insertl(int x)
{
    struct node *n=newnode;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
int main()
{
    a[]={1,4,5,6,7};
    create(a.5)
    return 0;
}
