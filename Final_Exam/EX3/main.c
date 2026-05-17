#include <stdio.h>

int main(void) {
    char str[256];

    int letterCount = 0;
    int digitCount = 0;

    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            letterCount++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        }
        i++;
    }

    printf("Number of letters: %d\n", letterCount);
    printf("Number of digits: %d\n", digitCount);

    return 0;
}
