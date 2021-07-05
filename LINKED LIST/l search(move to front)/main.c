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
 void display(struct node *p)
 {
     while(p)
     {
         printf("\n %d " ,p->data);
         p=p->next;
     }
 }
struct node* lsearch(struct node *p,int key)
{
    while(p)
    {
        struct node *q;
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return (p);
        }

        q=p;
    p=p->next;

    }
return NULL;
}


int main()
{

    int a[]={3,5,7,10,15};
    create(a,5);

    struct node *temp;
     temp=lsearch(first,10);
    if(temp)
    {
        printf("key is found %d",temp->data);

    }

    else
    {
        printf("key is not found");

    }
    display(first);

    return 0;
}
