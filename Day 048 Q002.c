#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    char *wordStart = NULL;

    for(int i = 0; i <= len; i++) {
        if(wordStart == NULL && str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            wordStart = &str[i];  
        }

        if((str[i] == ' ' || str[i] == '\0' || str[i] == '\n') && wordStart != NULL) {
            reverseWord(wordStart, &str[i - 1]);  
            wordStart = NULL;
        }
    }

    printf("Output: %s", str);
    return 0;
}
