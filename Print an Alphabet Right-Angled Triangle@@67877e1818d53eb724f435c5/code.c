#include <stdio.h>

int main() {
    int i, j,N;
    char ch;

    
    scanf("%d", &rows);

    for (i = 1; i <= N; i++) {
        ch = 'A';  // Reset to 'A' for each row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;  // Move to the next letter
        }
        printf("\n");
    }

    return 0;
}
