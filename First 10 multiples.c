/* Read a no to find 10 multiples */

#include <stdio.h>

int main() {
    int n, i;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The first 10 multiples of %d are:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

