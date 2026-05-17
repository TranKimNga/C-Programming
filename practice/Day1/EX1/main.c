#include <stdio.h>

int main(void) {
    long long a, b;

    scanf("%lld %lld", &a, &b);

    long long thuong = a / b;
    long long du = a % b;

    printf("%lld %lld", thuong, du);

    return 0;
}