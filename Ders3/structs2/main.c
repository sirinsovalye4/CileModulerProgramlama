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
	int vites;
};

void oto_yazdir(struct oto yOto);
void oto_renk_yazdir(int otorenk);

int main(int argc, char *argv[]) {
// Degisken tipi
	struct oto oto1 = {.renk = 5, .model = 'A', .vites = 5, .motor = 1.6};
	
	struct oto oto2 = { 1.3, 2, 'C', 6}; 
	
	oto_yazdir(oto1);
	oto_yazdir(oto2);

	return 0;


}

void oto_yazdir(struct oto yOto)
{
	
	printf("********************************************************************\n");
	printf("oto renk = ");
	oto_renk_yazdir(yOto.renk);
	printf("oto renk = %d model = %c vites = %d motor = %f\n",	yOto.renk,
																yOto.model,
																yOto.vites,
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














