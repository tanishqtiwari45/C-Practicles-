/* Read a no to print reverse*/

#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;         
        reversed = reversed * 10 + remainder;  
        n /= 10;
    }
    printf("Reversed number: %d\n", reversed);

    return 0;
}

