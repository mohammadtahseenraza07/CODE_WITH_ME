#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}
*first=0;
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
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int max(struct node *p)
{
int m=-325678; // min integer
while(p)
{
    if(p->data>m);
         m=p->data;
         p=p->next;

}

return m;
}
int main()
{
    int a[]={3,5,12,45,75,66,58,7};
create(a,8);
printf("max element %d\n",max(first));
display(first);
return 0;
}
