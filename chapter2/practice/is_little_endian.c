#include <stdio.h>
#include <stdint.h>

/*
 * 리틀 엔디안 머신에서 실행하면 1을 리턴
 * 빅 엔디안 머신에서는 0을 리턴
 * 워드 크기와 무관한 프로시저
 */

uint8_t is_little_endian() {
	uint16_t num = 0x0001;
	// num의 시작 주소를 1바이트 단위 포인터로 강제 형변환
	uint8_t *byte_pointer = (uint8_t*)&num;
	return *byte_pointer;
}

int main() {
	printf("%hhu\n", is_little_endian());
	return 0;
}
