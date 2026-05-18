#include <stdio.h>

int main(void) {
    long long n;

    scanf("%lld", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
