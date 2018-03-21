#include "stdio.h"

int ustAl(int x, int n)
{
	int sonuc=x;
	for(int i=1;i<=n-1;i++)
	sonuc= sonuc*x;
	
	return sonuc;
}

int main(){

	int hesapSonuc= ustAl(2,3);
	printf("%d",hesapSonuc);
	return 0;
}



