#include <stdio.h>

int main(void) {
    int x;

    scanf("%d", &x);

    int A = (x * x * x) + (3 * (x * x)) + x + 1;

    printf("%d", A);
    return 0;
}
