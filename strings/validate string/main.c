#include <stdio.h>
#include <stdlib.h>
 int validate(char *name)
 {
     int i;
     for (i=0;name[i] != '\0';i++)
     {
         if(!(name[i]>=65&&name[i]<=90)&& !(name[i]>=97&&name[i]<=122))

             return 0;
     }
         return 1;
};

int main()
{
   char *name="ai";
   //fgets(name,sizeof(name),stdin);
   if(validate(name))
   {
       printf("string is valid");
   }
   else
   {
       printf("string is invalid");
   }

}
