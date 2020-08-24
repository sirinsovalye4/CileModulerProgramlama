#include <stdio.h>
#include <stdlib.h>

// Struct tanimlama
// Struct degisken tanimlama
// Struct baslangic degeri verme
// Struct uyelerine erisim



struct oto
{
	float motor;
	int renk;
	char model;
	int seriNo;
}oto3;

void oto_yazdir(struct oto yOto);
void oto_renk_yazdir(int otorenk);
void oto_giris_al(struct oto *pGiris);

int main(int argc, char *argv[]) {
// Degisken tipi
	struct oto oto1,oto2;


/*	struct oto *pOto;	
	pOto = &oto1;   //structlara pointer ile erisirken -> kullaniyoruz
	pOto->model = 'A';
	pOto->renk = 1;
*/	

	oto_giris_al(&oto1);
	oto_giris_al(&oto2);
	
	return 0;


}

void oto_yazdir(struct oto yOto)
{
	
	printf("********************************************************************\n");
	printf("oto renk = ");
	oto_renk_yazdir(yOto.renk);
	printf("oto renk = %d model = %c vites = %d motor = %f\n",	yOto.renk,
																yOto.model,
																yOto.seriNo,
																yOto.motor);
	printf("********************************************************************\n");

}

void oto_renk_yazdir(int otorenk)
{
		switch(otorenk)
		{
			case 0: printf("Siyah\n");	break;
			case 1: printf("Kirmizi\n");	break;
			case 2: printf("Mavi\n");	break;
			case 3: printf("Sari\n");	break;
			default: printf("Gecersiz renk kodu\n");	break;			
		}
}

void oto_giris_al(struct oto *pGiris)
{
	printf("otomobil seri No giriniz:\n");
	scanf("%d",&(pGiris->seriNo));

	printf("otomobil renk kodunu giriniz:\n");
	scanf("%d",&(pGiris->renk));

	printf("otomobil motor hacmini giriniz:\n");
	scanf("%f",&(pGiris->motor));

	printf("otomobil model kodunu giriniz:\n");
	scanf(" %c",&(pGiris->model));

	oto_yazdir(*pGiris);
	
}

