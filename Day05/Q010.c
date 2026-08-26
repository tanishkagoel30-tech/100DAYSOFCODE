#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Input total seconds
    printf("Enter total seconds: ");
    if (scanf("%d", &totalSeconds) != 1 || totalSeconds < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    // Conversion
    hours = totalSeconds / 3600;           // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;  // Remaining minutes
    seconds = totalSeconds % 60;           // Remaining seconds

    // Output in HH:MM:SS format
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}