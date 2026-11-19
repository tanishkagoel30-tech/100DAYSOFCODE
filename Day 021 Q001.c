#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, pow10 = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num;

    last = n % 10;        
    while (n >= 10) {
        n /= 10;
        digits++;
        pow10 *= 10;
    }
    first = n;             
    if (first == last) {
        printf("Swapped number: %d", num);
        return 0;
    }
    temp = num % pow10;       
    temp = temp / 10;          
    int swapped = last * pow10 + temp * 10 + first;

    printf("Swapped number: %d", swapped);

    return 0;
}
