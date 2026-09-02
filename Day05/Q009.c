#include <stdio.h>
#include<math.h>

int main() {
    float p,r,t;
    printf("enter value for principle rate of interest time");
    scanf("%f%f%f",&p,&r,&t);    
    printf("simple interest is %f",(p*r*t)/100);
    Cp=p*pow((1+r/100),t);
    printf("compound interest is%f\n",cp);
    return 0;

}
