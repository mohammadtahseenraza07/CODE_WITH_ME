#ifndef QUEUEU_h
#define QUEUEU_h
struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
    node **Q;
};


struct queue
{
    int size;
    int rear;
    int front
    int *Q;
};
void create(struct queue *q,int size)
{
    q->size=size;
    q->rear=q->front=0;
    q->Q=(node **)malloc(q->size*sizeof(int));
}
void enqueue(struct queue *q,node * x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("queue is full");
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;

    }
}
node * deque(srtruct queue *q)
{
    node *x=NULL;
    if(q->front==q->rear)
        printf("queue is empty")
        else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
return x;
}
int isempty(struct queue q)
{
    return q.front==q.rear;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
#endif // QUEUEU_H_INCLUDED
