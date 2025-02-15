#include <stdio.h>
int main()
{
    
    unsigned int a; // 00000011 in binary
    unsigned int b;
    unsigned int c;
    scanf("%d",a);
    scanf("%d",b);
    c = a << b; // Performing left shift by 2 positions

    printf("%d",c);
    return 0;
}

   