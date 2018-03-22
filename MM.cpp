#include "stdio.h"

int* MM(int a[],int n, int result[])
{

	 result[0]=a[0]; //smallest value will be in result[0]
     result[1]=a[0]; //greatest value will be in result[1]
	for(int i=0;i<n;i++)
	{
	
		if (a[i]>result[1])
			result[1]=a[i];
			
		if (a[i]<result[0])
			result[0]=a[i];
		
	}
	return(result);
}

int main(){
	
	int b[]={4,5,10,233,32};
	int values[2];
	MM(b,5, values);
	printf("Smallest: %d ",values[0]);
	printf("Greatest: %d ",values[1]);
	
	
	return 0;
}
