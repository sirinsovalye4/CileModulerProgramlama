#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int deg = 0;
int *pdeg;

deg = 10;

pdeg = &deg;
printf("degiskenin ilk degeri : %d\n",deg);

*pdeg = 20;
printf("degiskenin son degeri : %d\n",deg);
printf("pointerin degeri : %d\n",pdeg);

deg=15;
printf("pointerin gosterdigi yerin degeri : %d\n",*pdeg);

pdeg = pdeg + 2;
printf("pointerin yeni degeri : %d\n",pdeg);
printf("pointerin gosterdigi yerin degeri : %d\n",*pdeg);

	return 0;
}
