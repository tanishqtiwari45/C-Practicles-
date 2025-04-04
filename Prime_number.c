/* Read a no to check prime ( a no divisible by 1 and itself) */

#include <stdio.h>

int main() {
    int n, i, flag = 1; // flag = 1 means prime, 0 means not prime

   
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 0; 
                break;
            }
        }

        
        if (flag == 1) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}

