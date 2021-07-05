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
int count(struct node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l ;
}
void display(struct node *p)
{
    while(p!=NULL)
    {

        printf("%d ",p->data);
        display(p->next);

        break;

    }

}
void insert (struct node *p , int index , int x)
{
    struct node *t;
    t=(struct node*)malloc(sizeof (struct node));
    t->data =x;
    if(index==0)
    {
      t->next=first;
      first = t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        t->next=p->next;
        p->next=t;
        }

    }
}


int main()
{
    int a[]={3,5,7};
    create(a,3);

    insert(first,1,2);
    display(first);
    return 0;
}
