#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    int digit, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);

    return 0;
}
