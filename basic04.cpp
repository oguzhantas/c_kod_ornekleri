#include "stdio.h"

int main(){
	
	float average, exam1, exam2;

	printf("Enter your first exam point:");
	scanf("%f",&exam1);
	
	printf("Enter your second exam point:");
	scanf("%f",&exam2);
	
	average= (exam1+exam2)/2;
	
	printf("Your average is %f", average);
	
	return 0;
	
}
