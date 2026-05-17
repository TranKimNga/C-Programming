#include <stdio.h>

// Function prototype
void findExtremes(int arr[], int n, int *max, int *min);

int main(void) {

    int data[] = {4, -2, 8, 1, 9, 5};

    int n = sizeof(data) / sizeof(data[0]);

    int maxValue;
    int minValue;

    // Function call
    findExtremes(data, n, &maxValue, &minValue);

    // Output
    printf("Maximum value: %d\n", maxValue);
    printf("Minimum value: %d\n", minValue);

    return 0;
}

// Function definition
void findExtremes(int arr[], int n, int *max, int *min) {

    // Assume first element is max and min
    *max = arr[0];
    *min = arr[0];

    // Traverse array
    for (int i = 1; i < n; i++) {

        // Find max
        if (arr[i] > *max) {
            *max = arr[i];
        }

        // Find min
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}