#include <stdio.h>

int main(void) {
    float s;
    float total;

    do {
        printf("Enter the distance (km): ");
        scanf("%f", &s);

        if (s < 0) {
            printf("Invalid distance! Please enter again.\n");
        }
    } while (s < 0);

    if (s <= 1) {
        total = 15000;
    } else if (s <= 10) {
        total = 15000 + (s - 1) * 13500;
    } else {
        total = 15000 + 9 * 13500 + (s - 10) * 11000;
    }

    if (s > 20) {
        total = total * 0.9;
    }

    printf("Total amount of fees the customer has to pay: %.0f VND", total);

    return 0;
}
