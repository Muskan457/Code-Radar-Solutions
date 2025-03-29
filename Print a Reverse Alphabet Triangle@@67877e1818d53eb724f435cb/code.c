#include <stdio.h>
int main()
{
    char c;
    int a,b,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        c='A';
        for(b=N;b>=1;b--)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}