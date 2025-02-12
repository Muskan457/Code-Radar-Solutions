#include <stdio.h>
int main()
{
    int a;
    float b;
    printf("enter the radius");
    scanf("%f",&a);
    b=3.14*a*a;
    printf("area of circle=%.3f\n",&b);
    return 0;
}