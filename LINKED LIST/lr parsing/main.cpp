#include<iostream>
#include<string.h>
using namespace std;

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
