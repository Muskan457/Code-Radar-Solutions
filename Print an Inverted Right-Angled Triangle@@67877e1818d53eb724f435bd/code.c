#include <stdio.h>
int main()
{
    int a,b,N;
    scanf("%d",&N);
    for (a=1;a<=N;a++)
    {
        for(b=N;b>=1;b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}