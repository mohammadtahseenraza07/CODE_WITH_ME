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
int sum(struct node *b)
{
    int sum=0;
    while(b)
    {
        sum=sum+b->data;
        b=b->next;
    }
    return sum;
}
int rsum(struct node*p)
{

    if(p==NULL)
        return 0;
    else
        return rsum(p->next)+p->data;
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

int main()
{
    int a[]={3,5,7,10,15};
    create(a,5);
    display(first);
    printf("\ncounted number %d\n",count(first));
    printf("sum of number %d\n ",rsum(first));

    return 0;
}
