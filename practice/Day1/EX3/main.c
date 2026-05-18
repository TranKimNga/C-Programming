#include <stdio.h>

int main(void) {
    long long a, b, c;

    scanf("%lld %lld %lld", &a, &b, &c);

    printf("%lld", a * (b + c) + b * (a + c));

    return 0;
}
