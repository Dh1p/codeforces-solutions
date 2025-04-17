#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);  // Fix the scanf format specifier

    // Loop through rows
    for(int i = 1; i <= n; i++) 
    {
        // Print spaces before stars
        for(int j = 1; j <= n - i; j++) 
        {
            printf(" ");  // Print spaces
        }

        // Print stars for the current row
        for(int j = 1; j <= (2*i - 1); j++) 
        {
            printf("*");  // Print stars
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
