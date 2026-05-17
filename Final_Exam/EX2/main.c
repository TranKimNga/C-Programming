#include <stdio.h>

int main(void) {
    int n;
    int a[100];

    int sum = 0;
    int count = 0;
    float average;

    do {
        printf("Enter number of elements (1-100): ");
        scanf("%d", &n);

        if (n <= 0 || n > 100) {
            printf("Invalid input! Please enter again.\n");
        }

    } while (n <= 0 || n > 100);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Even numbers in the array: ");

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }

    for (int i = 0; i < n; i++) {

        if (a[i] > 0) {
            sum += a[i];
            count++;
        }
    }

    if (count > 0) {
        average = (float)sum / count;

        printf("\nAverage of positive numbers: %.2f\n", average);
    }
    else {
        printf("There are no positive numbers in the array.");
    }

    return 0;
}