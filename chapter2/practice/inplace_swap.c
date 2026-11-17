#include <stdio.h>

// XOR은 결합법칙, 교환법칙이 성립한다.
// x와 y에 같은 값을 넣으면 버그

void inplace_swap(int *x, int *y) {
    // 시작:  *x = a,  *y = b
    *y = *x ^ *y;  // *x = a,      *y = a ^ b
    *x = *x ^ *y;  // *x = a ^ (a ^ b) = (a ^ a) ^ b = 0 ^ b = b   (결합법칙, a^a=0, 0^b=b)
                   // *y = a ^ b
    *y = *x ^ *y;  // *x = b,      *y = b ^ (a ^ b) = (b ^ b) ^ a = a   (교환·결합법칙)
}

int main() {
        int a = 1, b = 2;

        inplace_swap(&a, &b);

        printf("%d %d\n", a, b);

        return 0;
}
