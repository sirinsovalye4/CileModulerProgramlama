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
}oto3;

int main(int argc, char *argv[]) {
// Degisken tipi
	struct oto oto1 = {.renk = 5, .model = 'A', .vites = 5, .motor = 1.6};
	
	struct oto oto2 = { 1.3, 2, 'C', 6}; 
	
	printf("oto renk = %d model = %c vites = %d motor = %f\n",oto1.renk,oto1.model,oto1.vites,oto1.motor);
	
	printf("oto2 renk = %d model = %c vites = %d motor = %f\n",oto2.renk,oto2.model,oto2.vites,oto2.motor);
	
	oto3.model = 'G';
	


	return 0;


}

