/* Read a no to find their digital sum
i.p- 1234
o.p - 10*/

#include <stdio.h>

int digitalSum(int num) {
    int sum = 0;
    
    while(num != 0) {
        sum += num % 10;  
        num /= 10;        
    }
    
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Digital sum: %d\n", digitalSum(number));
    
    return 0;
}
