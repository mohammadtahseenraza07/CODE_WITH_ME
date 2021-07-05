#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int temp;
    temp=&a;
    *a=*b;
    *b=temp;
}
int partiotion(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;
    do
    {
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);

            if(i<j)swap(&a[i],&a[j]);
    }
    while(i<j);
        swap(&a[l],&a[j]);
    return j;

    }
 void quicksort(int a[],int l,int h)
 {
     int j;
     if(l<h)
     {
         j=partiotion(a,l,h);
         quicksort(a,l,j);
         quicksort(a,j+1,h);

     }
 }
int main()
{
   int a[]={11,13,15,7,8,9,8,9,3,24},n=10,i;
   quicksort(a,0,n-1);
   for(i=0;i<10;i++)
   {
       printf("%d",a[i]);
       printf("\n");
   }
    return 0;
}
