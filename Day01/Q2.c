#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",
           a + b, a - b, a * b, a / b);

    return 0;
}
