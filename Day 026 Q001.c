#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        for (int n = i; n <= 5; n++) {
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}
