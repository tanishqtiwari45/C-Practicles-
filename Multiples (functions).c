/* read a no and find 10 multiples of it . read a no -5 :5 ,10,15....50*/

#include <stdio.h>
void printMultiples(int num) {
    printf("First 10 multiples of %d are:\n", num);
    int i;
    for (i = 1; i <= 10; i++) 
	{
        printf("%d", num * i);
        if(i < 10) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printMultiples(number);
    
    return 0;
}
