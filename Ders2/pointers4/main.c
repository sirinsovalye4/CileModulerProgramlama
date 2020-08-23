#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	unsigned int num = 0xAB123478; //32bit sayi
	
	unsigned char *pnum;
	
	unsigned char bytes[4];
	
	pnum = &num;
	
	bytes[0] = *pnum;
	bytes[1] = *(pnum+1);
	bytes[2] = *(pnum+2);
	bytes[3] = *(pnum+3);
	
	printf("byte1 : %x  byte2 : %x  byte3 : %x  byte4 : %x", bytes[0], bytes[1], bytes[2], bytes[3]);
	
	
	return 0;
}
