#include <stdio.h>

int main() {
    int i, j;
    int rows[] = {1, 3, 5, 7, 5, 3, 1};  

    for(i = 0; i < 7; i++) {
        for(j = 0; j < rows[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
