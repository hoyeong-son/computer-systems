#include <stdio.h>

// 정상적인 type 체계를 회피한 코드
// int, float, pointer type의 변수를 unsinged char type의 pointer로 참조
// multi-byte data를 낮은 주소의 바이트부터 16진법으로 출력해준다.

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
	for (size_t i = 0; i < len; i++) {
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}

int main() {

	int ival = 0x01020304;
	float fval = (float) ival;
	int *pval = &ival;
	
	show_int(ival);
	show_float(fval);
	show_pointer(pval);

}




