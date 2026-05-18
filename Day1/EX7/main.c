#include <stdio.h>

int main(void) {
    long long c;

    scanf("%lld", &c);

    double f = (double) c * 9 / 5 + 32;

    printf("%.2lf", f);
    return 0;
}
