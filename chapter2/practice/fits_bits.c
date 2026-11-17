/*
 * Return 1 when x can be represented as an n-bit, 2's-complement
 * number; 0 otherwise
 * Assume 1 <= n <= (sizeof(int) << 3) : int의 비트 수
 */

// 산술 시프트 의존성이 있는 코드

int fits_bits(int x, int n) {
	int count_cutting_bits = (sizeof(int) << 3) - n;
	return !(x ^ ((x << count_cutting_bits) >> count_cutting_bits));
}
