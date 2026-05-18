#include <stdio.h>
#include <math.h>

int main(void) {
    long long x1, y1, x2, y2;

    scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);

    printf("%.2lf", sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));

    return 0;
}
