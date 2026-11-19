#include <stdio.h>

int main() {
    for (int start = 5; start >= 1; start--) {
        for (int num = start; num <= 5; num++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
