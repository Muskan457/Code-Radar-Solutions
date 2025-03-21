#include <stdio.h> 

int main() {     
    int a, b, N;     
    scanf("%d", &N);  // Input the number of rows and starting number of stars
    
    // Outer loop for the number of rows
    for (a = 1; a <= N; a++) {         
        // Inner loop for printing stars
        for (b = N - a + 1; b >= 1; b--) {   // Decrease stars in each row
            printf("*");
        }         
        printf("\n");  // Move to the next line after printing all stars in a row
    }
    
    return 0;
}
