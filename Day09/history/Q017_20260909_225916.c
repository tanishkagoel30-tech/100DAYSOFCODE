#include <stdio.h>
#include<math.h>
int main() {
    float a,b,c;
    float discriminant,x1,x2;
    printf("enter a quadratic equation: ");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=((b*b)-(4*a*c));
    if(discriminant>0)
    {
        x1=(-b+sqrt(discriminant))/(2*a);
        x2=(-b-sqrt(discriminant))/(2*a);
        printf("root of the quadratic eq is:%f\n",x1);
        printf("root of the quadratic eq is:%f\n",x2);
    }
    else
    {
        printf("discriminant is negative");
    }

    return 0;

}
