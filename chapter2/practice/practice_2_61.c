#include <stdio.h>

// 모든 비트가 0일땐 false, 1이 하나라도 있을땐 true라는 점을 이용한 코드이다.

int all_one(int x) {
	return !~x; 
}

int all_zero(int x) {
	return !x; // all_zero : false
}

int LSB_is_one(int x) {
	return !~(x | ~0xFF); // LSB 제외 모두 1로 바꿔 LSB_is_one -> all_one 상태가 될 수 있도록 만든다.
}

int MSB_is_zero(int x) {
	int shift_count = (sizeof(int) - 1) << 3; // 1 Byte = 8 bit
	int MSB_mask = 0xFF << shift_count;
	return !(x & MSB_mask);
}

int main() {
	unsigned int x = 0xFFFFFFFF;
	printf("x = 0xFFFFFFFF\n");
	printf("all one : %d\n", all_one(x));
	printf("all_zero : %d\n", all_zero(x));
	printf("LSB_is_one : %d\n", LSB_is_one(x));
	printf("MSB_is_zero : %d\n", MSB_is_zero(x));

	x = 0x000000FF;
	printf("x = 0x000000FF\n");
	printf("all one : %d\n", all_one(x));
	printf("all_zero : %d\n", all_zero(x));
	printf("LSB_is_one : %d\n", LSB_is_one(x));
	printf("MSB_is_zero : %d\n", MSB_is_zero(x));
	
	x = 0x00000000;
	printf("x = 0x00000000\n");
	printf("all one : %d\n", all_one(x));
	printf("all_zero : %d\n", all_zero(x));
	printf("LSB_is_one : %d\n", LSB_is_one(x));
	printf("MSB_is_zero : %d\n", MSB_is_zero(x));
	
	return 0;
}
