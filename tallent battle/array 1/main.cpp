#include <iostream>

using namespace std;

int main()
{
    cout << "enter the value sir " ;
    int num;
    cin>>num;
    int a[num];
    for (int i=0;i<num;i++)
    {
        cin>>a[i];
    }
cout<<"enter frequency of element";
int sea;
int b=0;
cin >>sea;
    for(int i=0;i<num;i++)
    {
        if(a[i]==sea)
        {
             b=b+1;
        }
    }
    cout<<"frequency of element as"<< b;
/*
    for(int j=0;j<num;j++)
    {
        cout<<"array"<<a[j];
    }
    */
    return 0;
}

