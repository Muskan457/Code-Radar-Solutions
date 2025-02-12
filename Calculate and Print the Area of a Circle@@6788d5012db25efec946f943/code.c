#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("Enter the radius: ");
    scanf("%d", &a);
    b = 3.14 * a * a;
    printf("Area of the circle = %.2f\n", b);
    return 0;
}
