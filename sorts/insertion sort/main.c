#include <stdio.h>
#include <stdlib.h>

void swap (int *x,int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
void insertionsort(int a[],int n)
{
    int x,j;
    for (int i=1;i<n;i++)
    {
        j=i-1;
        x=a[i];
        while(j>-1&&a[j]>x)
        {
           a[j+1]=a[j];
           j--;
    }

    a[j+1]=x;
}
}
int main()
{
    int a[]={1,2,4,1,9},n=5;
    insertionsort(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
