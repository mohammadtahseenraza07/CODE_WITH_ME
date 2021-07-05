#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}
*first=NULL;
void create(int a[],int n)
{
    struct node *t ,*last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data =a[0];
    first->next=NULL;
    last=first ;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
struct node*search(struct node *p,int key)
{
    while(p)
    {
        if(key==p->data)
        return (p);
    p=p->next;

    }
return NULL;
}


int main()
{

    int a[]={3,5,7,10,15};
    create(a,5);

    struct node *temp;
     temp=search(first,10);
    if(temp)
    {
        printf("key is found %d",temp->data);

    }

    else
    {
        printf("key is not found");

    }

    return 0;
}
