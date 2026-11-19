#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sortString(char str[]) {
    int i, j;
    char temp;
    int n = strlen(str);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    scanf("%s %s", str1, str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }

    sortString(str1);
    sortString(str2);

    if (strcmp(str1, str2) == 0)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
