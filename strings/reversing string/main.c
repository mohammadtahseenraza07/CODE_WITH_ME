#include <stdio.h>
#include <stdlib.h>
//1st method
int main()
{
    printf("take input");
    char a[100];
    fgets(a,sizeof(a),stdin);
    char b[100];
    int i;
    for(i=0;a[i]!='\0';i++)
    {
    }
    i=i-1;
    for(int j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    printf("%s",b);
    return 0;
}
