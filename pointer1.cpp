#include "stdio.h"

//pointer diziler
int main(){
	const int MAX =3;
	char *array[]={"apple","banana", "strawberry"};
	
	for(int i=0;i<MAX;i++)
	printf("%s\n",array[i]);

	return 0;
}
