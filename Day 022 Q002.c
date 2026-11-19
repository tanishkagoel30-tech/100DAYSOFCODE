#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    float sum = 0.0;

    for (int i = 1; i <= n; i++) {
        float term = (float)(2*i - 1) / (2*i);
        sum += term;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
