#include <stdio.h>
int main()
{
    int a,b,c=1,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}