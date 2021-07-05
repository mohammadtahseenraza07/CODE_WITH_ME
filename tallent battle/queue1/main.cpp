#include <iostream>

using namespace std;

class Queue
{
private:
    int items[5], front , rear;
public:
    Queue()
    {
        front=-1;
        rear=-1;
    }
    bool isfull()
    {
        if(front ==0 && rear==4)
        {
            return true;
        }
        return false;
    }
     bool isempty()
    {
        if(front ==-1)
        {
            return true;
        }
        return false;
    }
    void enque(int element)
    {
        if(isfull())
        {
            cout<<"queue is full";
        }
        else
        {
            if(front==-1)
            {
                front =0;
            }
            else
            {
                rear++;
                items[rear]=element;
                cout<<"inserted"<<element<<endl;
            }
        }
    }
    int deque()
    {
        int element;
    if(isempty())
    {
        cout<<"queue is empty";
        return -1;
    }
    else
    {
        element=items[front];
        if(front>rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
            cout<< " \n deleted"<<element<<endl;
            return element;
    }
}
    void display()
    {
        int i;
        if(isempty())
        {
            cout<<"queue is empty";
        }
        else
        {
            cout<<"front index"<<front;
            cout<<"items";
            for(i=front;i<=rear;i++)
            {
                cout<< items[i]<< " " ;

            }
        }
    }
};
int main()
{
    Queue q;
    //q.deque();
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.enque(50);
    q.display();
    q.deque();

    return 0;
}
