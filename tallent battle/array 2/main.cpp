#include <iostream>

using namespace std;

int main()
{
    int n ;
    cout<<"bhaiya ji number bolo";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i;
    int odd=0,even=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even++;
        if(arr[i]%2==1)
            odd++;
    }
    if(odd==n)
    {
        cout<<"array all is of odd type";
    }
    else if(even==n)
    {
        cout<<"array is of even type";
    }
    else
    {
        cout<<"array is of mixed type";
    }
    return 0;
}
