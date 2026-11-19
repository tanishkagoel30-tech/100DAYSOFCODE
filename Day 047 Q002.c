#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], longest[200], word[200];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }
    word[j] = '\0';
    if (j > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s", longest);

    return 0;
}
