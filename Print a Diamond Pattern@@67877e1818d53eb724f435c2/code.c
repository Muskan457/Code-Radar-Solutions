#include <stdio.h>
int main()
{
    int a,b,c,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        for(b=N/2;b>=1;b--)
        {
            printf(" ");
        }
        for(c=1;c<=(2*a)-1;c++)
        {
            printf("*");
        }
        return 0;
    }
}