#include <stdio.h>
int main()
{
    int a,b,c,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        for(b=1;b<=N-1;b++)
        {
            printf(" ");
        }
        for(c=a;c<=a;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}