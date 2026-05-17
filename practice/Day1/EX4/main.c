#include <stdio.h>

int main(void) {
    long long a,b;
    scanf("%lld %lld", &a, &b);
    long long tong = a + b;
    long long hieu = a - b;
    long long tich = a * b;
    double thuong = (double) a/b;

    printf("%lld %lld %lld %.2f", tong, hieu, tich, thuong);

    return 0;
}
