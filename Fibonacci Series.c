#include <stdio.h>

void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    if (n >= 1) {
        printf("Fibonacci Series: %d", t1);
    }
    if (n >= 2) {
        printf(", %d", t2);
    }

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Number of terms must be greater than 0.\n");
    } else {
        generateFibonacci(n);
    }

    return 0;
}
