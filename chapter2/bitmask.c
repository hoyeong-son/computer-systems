#include <stdio.h>

int main(){

	// Bitmask Operation
	unsigned char a = 0x15; //0001 0101
	a |= (1 << 3); //0001 0101 | 0000 1000 = 0001 1101
	a &= (~(1 << 2)); //0001 1101 & 1111 1011 = 0001 1001
	
	unsigned char printVal = 0;

	printVal = a & (1<<7);
	printVal = printVal >> 7;
	printf("%d", printVal);
	 
	printVal = a & (1<<6);
	printVal = printVal >> 6;
	printf("%d", printVal);

	printVal = a & (1<<5);
	printVal = printVal >> 5;
	printf("%d", printVal);

	printVal = a & (1<<4);
	printVal = printVal >> 4;
	printf("%d ", printVal);

	printVal = a & (1<<3);
	printVal = printVal >> 3;
	printf("%d", printVal);

	printVal = a & (1<<2);
	printVal = printVal >> 2;
	printf("%d", printVal);

	printVal = a & (1<<1);
	printVal = printVal >> 1;
	printf("%d", printVal);

	printVal = a & 1;
	printf("%d\n", printVal);

	return 0;
}
