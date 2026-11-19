#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;   
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {   
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }
    printf("Product of odd digits = %lld", product);

    return 0;
}
