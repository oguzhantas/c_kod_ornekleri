#include "stdio.h"
#include "math.h"
//Kök alma iþleminin Babylon tarzýnda yapýlýþý
double BabylonianSQRT(double a, double hata){
	double x=a;
	while ( abs(x-a/x)>hata)
	{
		x= (x+a/x)/2;
	}
	return x;
}

int main(){
	double a=2, hata= 0.0001;
	double sonuc= BabylonianSQRT(a,hata);
	printf("Babylonian Kök %lf\n", sonuc);
	printf("Normal Kök: %lf",sqrt(a));
	return 0;
}
