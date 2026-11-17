#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b) {
	unsigned mask = 0xFF << (i * 8);
	return (x & ~mask) | (b << (i * 8));
}

int main() {
	unsigned result = replace_byte(0x12345678, 2, 0xAB);
	unsigned char *byte_pointer = (unsigned char*)&result;

	for (int i = sizeof(unsigned) - 1; i >= 0; i--) {
		printf("%hhx ", *(byte_pointer + i));
	}
	printf("\n");

	return 0;
}
