#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    printf("take input");
    fgets(a,sizeof(a),stdin);
    int vcount=0 , ccount=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            vcount++;
        }
        else if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<122 ))
        {
            ccount++;
        }
    }
    printf("%d \n%d",vcount,ccount);
    return 0;
}
