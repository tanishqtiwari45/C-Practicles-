/* Read a no to find digital sum */

#include <stdio.h>

int main() {
    int n, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        digit = n % 10;   
        sum += digit;     
        n /= 10;          
    }

    
    printf("Digital sum: %d\n", sum);

    return 0;
}

