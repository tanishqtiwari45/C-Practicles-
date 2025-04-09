/* Read a Four Digit no to print it using Alphabet  i.p 1234 o.p One Two Three Four*/



#include <stdio.h>

int main() {
    int num, digit, divisor = 1000;
    
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    
    if(num < 1000 || num > 9999) {
        printf("Please enter a valid four-digit number.\n");
        return 1;
    }
    
    printf("Output: ");
    
    while(divisor >= 1) {
        digit = num / divisor;
        num = num % divisor;
        divisor /= 10;
        
        switch(digit) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }
    }
    
    printf("\n");
    return 0;
}
