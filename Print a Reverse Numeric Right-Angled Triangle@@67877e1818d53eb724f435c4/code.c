#include <stdio.h>
int main()
{
    int a,c,N;
    scanf("%d",&N);
    for(a=N;a>=1;a--)
    {
        
        for(c=1;c<=a;c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}