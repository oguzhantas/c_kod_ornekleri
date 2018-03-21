#include "stdio.h"
//Linear Search
//n elemanlý bir dizide x elemanýný arar, bulursa 1 bulmazsa 0

int ara(int a[],int n, int x)
{
	int sonuc=0;
	for(int i=0;i<n;i++)
	{
		if (a[i]==x)
		sonuc=1;
	}
	return sonuc;
}

int main(){
	
 	int y;
	int array[]={4,5,6,7,100,2};
	
	printf("Aranacak sayi giriniz:");
	scanf("%d",&y);
	int deger=ara(array,6,y);
	if (deger==0)
		printf("Bulunamadi");
	else 
		printf("Bulundu");
	
	return 0;
}
