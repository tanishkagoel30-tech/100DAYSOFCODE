#include <stdio.h>

int main() {
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a= %d\n",a);
    printf("after swaping b= %d\n",b);

    return 0;

}
