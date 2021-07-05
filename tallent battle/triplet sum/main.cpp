#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,9,7,8,5,3,4,6,2,0};
    int sum=  10;
    int i,j,k,c,n,fin=0;
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++);
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                c=arr[i]+arr[j]+arr[k];
                if(c==sum)
                {
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                    fin=1;
                }
            }
        }
    }



    return 0;
    }
