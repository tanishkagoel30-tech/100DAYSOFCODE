#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);

    int a[n1];
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);

    int b[n2];
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int m = n1 + n2;
    int c[m];
    for(int i = 0; i < n1; i++)
        c[i] = a[i];
    for(int i = 0; i < n2; i++)
        c[n1 + i] = b[i];
    for(int i = 0; i < m; i++) {
        for(int j = i + 1; j < m; j++) {
            if(c[i] > c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(int i = 0; i < m; i++)
        printf("%d ", c[i]);

    return 0;
}
