#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        printf("Even");
    }
    else if(b>a)
    {
        printf("Odd");
    }
    else{
        printf("Equal")
    }
    return 0;
}