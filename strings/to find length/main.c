#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[]="welcome mtr";
    int i,word=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            word++;
        }
    }
    printf("%d",i-word);
    return 0;
}
