#include <stdio.h>
#include <stdlib.h>

void swap (int *x,int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
void bubblesort(int a[],int n)
{
    int i,j,flag=0;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                flag=1;
            }
        }
        if (flag==0)
            break;
    }
}
int main()
{
    int a[]={1,2,4,7,9},n=5;
    bubblesort(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
