#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter integers only.\n");
        return 1; 
    }
    int sum = num1 + num2;
    printf("Sum = %d\n", sum);

    return 0;
}
