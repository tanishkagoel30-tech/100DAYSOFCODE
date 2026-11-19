#include <stdio.h>

int main() {
    char input[20];
    int dd, yyyy;
    scanf("%s", input);
    sscanf(input, "%d/04/%d", &dd, &yyyy);
    printf("%02d-Apr-%d", dd, yyyy);

    return 0;
}
