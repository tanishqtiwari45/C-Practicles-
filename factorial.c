/*Read a no to find factorial n!=n x n-1 x n-2 .....1*/

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // Using unsigned long long to handle large numbers

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking if the number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculating factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        // Displaying the result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}

