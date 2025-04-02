/* Read nos till their summation remains less than or equal Count total nos entered.*/


#include <stdio.h>

int main() {
    int count, sum = 0, num, totalNumbers = 0;

    // Input the maximum count
    printf("Enter the maximum count: ");
    scanf("%d", &count);

    // Loop to read numbers until the sum exceeds the count
    while (sum <= count) {
        printf("Enter a number: ");
        scanf("%d", &num);

        sum += num; // Add the number to the sum
        totalNumbers++; // Increment the count of numbers entered

        // Check if the sum exceeds the count
        if (sum > count) {
            break;
        }
    }

    // Output the total numbers entered
    printf("Total numbers entered: %d\n", totalNumbers);

    return 0;
}
