#include <stdio.h>
int main()
{
    int a,b,N;
    char ch='A'
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}