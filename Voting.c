/* Read Person name ,age to check voting Eligibility */

#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Input person's name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Input person's age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check voting eligibility
    if (age >= 18) {
        printf("\nHello %sYou are eligible to vote.\n", name);
    } else {
        printf("\nHello %sYou are not eligible to vote. You must be at least 18 years old.\n", name);
    }

    return 0;
}
