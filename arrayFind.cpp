#include "stdio.h"
//Linear Search
//n elemanlý bir dizide x elemanýný arar, bulursa 1 bulmazsa 0

int find(int a[],int n, int x)
{
	int result=0;
	for(int i=0;i<n;i++)
	{
		if (a[i]==x)
		result=1;
	}
	return result;
}

int main(){
	
 	int y;
	int array[]={4,5,6,7,100,2};
	
	printf("Please enter a number:");
	scanf("%d",&y);
	int value=find(array,6,y);
	if (value==0)
		printf("Not found");
	else 
	 printf("Found");
	
	return 0;
}
