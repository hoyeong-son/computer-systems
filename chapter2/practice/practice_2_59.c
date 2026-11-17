#include <stdio.h>
#include <stdint.h>

int main() {
	// 예상 실행 결과 : 0x765432EF
	uint32_t x = 0x89ABCDEF;
	uint32_t y = 0x76543210;
	uint32_t result = (x & 0xFF) | (y & ~0xFF);
	
	// little endian 기준
	for (int i = 3; i >= 0; i--) {
		uint8_t *byte_pointer = (uint8_t*)(&result);
		printf("%hhx ", *(byte_pointer + i));
	}
	
	printf("\n");

	return 0;
}
