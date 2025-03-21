  #include <stdio.h>

int main() {
    int i, j, N;
    scanf("%d", &N);  // Input the number of rows
    
    // Outer loop for the number of rows
    for (i = 1; i <= N; i++) {
        // Print spaces before stars in each row
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print stars in each row
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        
        // Move to the next line after printing stars
        printf("\n");
    }

    return 0;
}
