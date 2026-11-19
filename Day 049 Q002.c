#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *word;
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    word = strtok(name, " ");
    char lastWord[50];
    while (word != NULL) {
        strcpy(lastWord, word);          
        word = strtok(NULL, " ");
        if (word != NULL) {
            printf("%c.", lastWord[0]);
        }
    }
    printf(" %s", lastWord);

    return 0;
}
