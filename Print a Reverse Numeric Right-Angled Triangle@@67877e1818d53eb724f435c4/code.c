#include <stdio.h>
int main()
{
    int a,b,c,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        for(b=1;b<a;b++)
        {
            printf(" ");
        }
        for(c=N;c>=1;c--)
        {
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}