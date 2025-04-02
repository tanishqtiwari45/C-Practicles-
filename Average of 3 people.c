/* Read 3 persons name, age to find sum ,avg , eldest and youngest among them */

#include <stdio.h>
#include <string.h>

int main() {
    char names[3][100];
    int ages[3];
    int sum = 0, eldestAge = 0, youngestAge = 1000;
    char eldest[100], youngest[100];
    int i;

    // Input names and ages of 3 persons
    for (i = 0; i < 3; i++) {
        printf("Enter the name of person %d: ", i + 1);
        fgets(names[i], 100, stdin); // Correctly specify the size of each name buffer
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove newline character

        printf("Enter the age of person %d: ", i + 1);
        if (scanf("%d", &ages[i]) != 1) {
            printf("Invalid input. Please enter a valid age.\n");
            return 1; // Exit if invalid input is provided
        }
        getchar(); // Clear the newline character left in the buffer

        // Calculate sum of ages
        sum += ages[i];

        // Determine eldest and youngest
        if (ages[i] > eldestAge) {
            eldestAge = ages[i];
            strcpy(eldest, names[i]);
        }
        if (ages[i] < youngestAge) {
            youngestAge = ages[i];
            strcpy(youngest, names[i]);
        }
    }

    // Calculate average age
    float average = sum / 3.0;

    // Output results
    printf("\nSum of ages: %d\n", sum);
    printf("Average age: %.2f\n", average);
    printf("Eldest person: %s (Age: %d)\n", eldest, eldestAge);
    printf("Youngest person: %s (Age: %d)\n", youngest, youngestAge);

    return 0;
}
