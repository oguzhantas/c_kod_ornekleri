#include "stdio.h"
//En büyük ortak bölen (Greatest commmon divisor)
int NaiveGCD(int a, int b){
	
	while(a!=b){
		if (a>b)
			a= a-b;
		else
			b=b-a;
	}
	return a;
}

int main(){
	
	int sonuc= NaiveGCD(10724,864);
	printf("%d",sonuc);
	
	return 0;
}
