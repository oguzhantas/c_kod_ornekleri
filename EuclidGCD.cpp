#include "stdio.h"

int EuclidGCD(int a, int b){

int kalan;
	while(b!=0)
	{
		kalan= a%b;
		a=b;
		b=kalan;
		
	}
	return a;
}

int main(){
	int a=10724, b= 864;
	int sonuc= EuclidGCD(10724,864);
	printf("%d", sonuc);
	return 0;
}
