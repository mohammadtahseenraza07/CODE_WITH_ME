#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    printf("take input ");
    fgets(a,sizeof(a),stdin);
    for(int i=0;a[i]!='0';i++)
    {
        if(a[i]>=65 && a[i]<90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=90 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
    return 0;
}
