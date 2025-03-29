#include <stdio.h>
int main()
{
    int a,b,c,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        for(b=N-1;b>=1;b--)
        {
            printf(" ");
        }
        for(c=1;c<=a;c++)
        {
            printf(" %d ",c);
        }
        printf("\n");
    }
    return 0;
}