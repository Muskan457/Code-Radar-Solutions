#include <stdio.h>
int main()
{
    int a,b;
    if(a>b)
    {
        printf("Profit");
    }
    else if(b>a)
    {
        printf("Loss");
    }
    else{
        printf("Equal");
    }
    return 0;
}