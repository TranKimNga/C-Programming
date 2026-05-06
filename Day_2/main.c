//In các số chẵn nhỏ hơn n
//#include <stdio.h>

// int main() {
//     int n;
//     printf("Nhap n: ");
//     scanf("%d", &n);
//
//     n--;
//
//     while (n >= 0) {
//         if (n % 2 == 0) {
//             printf("%d\n", n);
//         }
//         n--;
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n, i = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (i < n) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}