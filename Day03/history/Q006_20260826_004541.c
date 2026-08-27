#include <stdio.h>

int main() {
    int a,b,x;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    x=a;
    a=b;
    b=x;
    printf("after swaping a= %d\n",a);
    printf("after swaping b= %d\n",b);

    return 0;

}
