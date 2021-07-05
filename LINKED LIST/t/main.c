// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int x=4,*y;
    y=&x;(*y)++;
    printf("%d",*y);

    return 0;
}
char * myFunc( char * ptr ){
	ptr+=3;
	return (ptr);
}

int main(){
	char *x,*y;
	x = "Hello";
	y = myFunc(x);
	printf("y = %s \n",y);

return 0;
}
