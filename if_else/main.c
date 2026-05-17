#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // int time = 16;
    //
    // bool isMorning = time < 17;
    // bool isDay = time < 18;
    //
    // if (isMorning) {
    //     printf("Good morning.");
    // } else if (isDay) {
    //     printf("Good day.");
    // } else {
    //     printf("Good evening.");
    // }

    // int time = 20;
    //
    // (time < 18) ? printf("Good day.") : printf("Good evening.");

    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3;

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        printf("Access granted\n");
    } else {
        printf("Access demied\n");
    }

    return 0;
}
