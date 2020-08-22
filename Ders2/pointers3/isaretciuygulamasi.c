#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>




int main(int argc, char *argv[]) {
	char byte;
	short short_integer;
	int integer;
	
	char *pbyte;
	short *pshort_integer;
	int *pinteger;
	
	pbyte = &byte;
	pshort_integer = &short_integer;
	pinteger = &integer;
	
	printf("sizeof char: %d\n", sizeof(byte));
	printf("sizeof integer :&d\n", sizeof(short_integer));
	printf("sizeof short:&d\n", sizeof(integer));

 	printf("char adress: &d\n", pbyte);
 	printf("short adress: &d\n", pshort_integer);
	printf("integer adress: &d\n", pinteger);
	
	pbyte++;
	pshort_integer++;
	pinteger++;
	
 	
 	
	return 0;
}
