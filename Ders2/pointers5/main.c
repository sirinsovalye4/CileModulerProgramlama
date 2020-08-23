#include <stdio.h>
#include <stdlib.h>

void merhabaDunya (void);
int sayiTopla(int a, int b);
int sayiToplaP(int *pSayi1,int *pSayi2);


int main(int argc, char *argv[]) {
	int sayi1 = 12;
	int sayi2 = 20;
	int sonuc = 0;


	
	merhabaDunya ();
	
	sonuc = sayiTopla(sayi1,sayi2);
	
	printf("sonuc = %d\n",sonuc);
	
	sonuc = sayiToplaP(&sayi1,&sayi2);
	
	printf("sonuc = %d\n",sonuc);
	
	sonuc = sayiToplaP(&sayi1,&sayi2);
	
	printf("sonuc = %d\n",sonuc);
	
	return 0;
}

/*
1 - Fonksiyon tanimlama
2 - Fonksiyon Cagirma
3 - Fonksiyona deger gecme
4 - Fonksiyondan deger dondurme
*/

void merhabaDunya (void)
{
	printf("helloWorld!\n");
	
	return;
}

int sayiTopla(int a, int b)
{
	int sonuc = 0;
	
	sonuc = a + b ;
	
	return sonuc;
}

int sayiToplaP(int *pSayi1,int *pSayi2)
{
	int sonuc = 0;
	
	sonuc = (*pSayi1)+ (*pSayi2);
	*pSayi1 = *pSayi1 + 1;
	*pSayi2 = *pSayi2 + 1;
	return sonuc;
}
