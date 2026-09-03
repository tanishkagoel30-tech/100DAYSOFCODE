#include <stdio.h>

int main() {
    char a;
    printf("enter a character: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        printf("it is an uppercase alphabet");
    }
    else if(a>='a' && a<='z')
    {
        printf("it is an lowercase alphabet");
    }
    else if(a>='0' && a<='9')
    {
        printf("char is numerical");
    }
    else
    {
        printf("char is a special character");
    }

    return 0;

}
