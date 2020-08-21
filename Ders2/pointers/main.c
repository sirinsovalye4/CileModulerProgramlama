#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int degisken1; //degisken tanimlama
	int *isaretci1; //isaretci tanimlama
	degisken1 = 10;
	isaretci1 = &degisken1;
	
	printf("%d %d \n",isaretci1 ,degisken1);
	*isaretci1 = 12;
	printf("%d %d \n",isaretci1 ,degisken1);
	return 0;
}
