#include <stdio.h>
int main(){
int a,b,c,N;
scanf("%d",&N);

    for(a=1;a<=N;a++)
    {
        for(b=1;b<=N-a;b++)
        {
            printf(" ");
        }
        for(c=1;c>=(2*a)-1;c++)
        {
            printf("*");
        }
    }
    for(a=N-1;a>=1;a--)
    {
        for(b=1;b<N-a;b++)
        {
            printf(" ");
        }
        for(c=(2*a)-1;c>=1;c--)
        {
            printf("*");
            printf("\n");
        }
        
    }
    return 0;
}