#include <stdio.h>
int main()
{
    int a,b,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        for(b='A';b<=a;b++)
        {
            printf("%c ",b);
        }
        printf("\n");
    }
    return 0;
}