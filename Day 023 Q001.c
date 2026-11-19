#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    float sum = 0.0;

    for (int i = 1; i <= n; i++) {
        float term = (2.0 * i) / (4.0 * i - 1);
        sum += term;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
