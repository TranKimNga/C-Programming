#include <stdio.h>

int main(void) {
    const double PI = 3.14;
    long long r;

    scanf("%lld", &r);

    double chuVi = 2 * PI * r;
    double dienTich = PI * r * r;

    printf("%.2lf %.2lf", chuVi, dienTich);

    return 0;
}
