/* Read a no and radix of a no to find power
base -2
radix -5
power(2,5)
power - 32*/

#include <stdio.h>

int power(int base, int radix) {
    int result = 1;
    int i;
    for(i = 0; i < radix; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, radix;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter radix (exponent): ");
    scanf("%d", &radix);
    
    int result = power(base, radix);
    
    printf("power(%d, %d) = %ld\n", base, radix, result);
    
    return 0;
}
