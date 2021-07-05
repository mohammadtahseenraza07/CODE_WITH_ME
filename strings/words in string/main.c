#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    fgets(a,sizeof(a),stdin);
    int i, word =0;
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]==' ')
            word++ ;
    }
    printf("%d",word +1);
    return 0;
}
