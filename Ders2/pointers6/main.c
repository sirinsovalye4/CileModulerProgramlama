#include <stdio.h>
#include <stdlib.h>
int sayiTopla(int a, int b);
void sayiToplaP(int *pa, int *pb, int *pSonuc);


int main(int argc, char *argv[]) {
	int sayi1 = 120;
	int sayi2 = 300;
	int sonuc = 0;
	
printf("sayi1 = %d, sayi2 = %d, sonuc = %d\n",sayi1,sayi2,sonuc);
	
	sayiToplaP(&sayi1, &sayi2, &sonuc);
	
	printf("sayi1 = %d, sayi2 = %d, sonuc = %d",sayi1,sayi2,sonuc);
	
	return 0;
}




int sayiTopla(int a, int b)
{
	
	return (a+b);
	
}


void sayiToplaP(int *pa, int *pb, int *pSonuc)
{
	*pSonuc = (*pa) + (*pb) ; 
}
