#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

unsigned char a = 10;
unsigned char *p;
p = &a;
printf("p = %d \na = %d \n", p , a);
*p = 20;
printf("p = %d \na = %d \n", p , a);
p++;
*p=10;
printf("p = %d \na = %d \n", p , a);
a++;
printf("p = %d \na = %d \n", *p , a);

	return 0;
}
