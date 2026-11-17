#include <stdio.h>
#include <stdbool.h>

bool check_logical() {
	int n = -1;	// 모든 비트가 1 (11111111...1111)
	return (n >> 1) > 0;  
}

int main() {
	if (check_logical()) {
		printf("This compiler uses logical shifts\n");
	}
	else {
		printf("This compiler uses arithmetic shifts\n");
	}

	return 0;
}
