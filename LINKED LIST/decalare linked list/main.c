/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data ;
    struct node *next;
};

int main()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=10;
    p->next=0;
    printf("%d",*p);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data ;
    struct node *next;
};

int main()
{
    struct node *p,*q;
    p=(struct node*)malloc(sizeof(struct node));
    //q=(struct node*)malloc(sizeof(struct node));
    p->data=10;
    p->next=0;
    p=p->next;
    printf("%d",*q);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data ;
    struct node *next;
};

int main()
{
    struct node *p ;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=10;
    p->next=0;
    if(p->next==0)
    {
        printf(" not pointing to any other node");
    }
    else
    {
        printf("pointing to another node");
    }



    return 0;
}

//traversing to all nodes
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data ;
    struct node *next;
};
int main()
{
    struct node *p ;
    struct node *p =first;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=10;
    p->next=0;
   while(p!=NULL)
   {
       p=p->next
   }


    return 0;
}
*/
