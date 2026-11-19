#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i = 0;
    fgets(name, sizeof(name), stdin);
    if (name[0] != ' ') {
        printf("%c.", toupper(name[0]));
    }
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf("%c.", toupper(name[i+1]));
        }
        i++;
    }

    return 0;
}
