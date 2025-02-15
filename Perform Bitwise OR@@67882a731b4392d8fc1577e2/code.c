#include <stdio.h>
int main()
{
    unsigned int x = 12; // 1100 in binary
    unsigned int y = 25; // 11001 in binary
    unsigned int result;

    result = x | y; // Performing bitwise OR

    printf("Result of %u | %u = %u\n", x, y, result);
    return 0;
}
