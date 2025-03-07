/*Read name , age ,height of a person , apply criteria for selection that is age should be in the range 18-25 years and height should be >=5.4*/

#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    printf("Enter the name of the person: ");
    scanf("%s", name);
    printf("Enter the age of the person: ");
    scanf("%d", &age);
    printf("Enter the height of the person (in feet): ");
    scanf("%f", &height);
    if (age >= 18 && age <= 25 && height >= 5.4) {
        printf("%s meets the selection criteria.\n", name);
    } else {
        printf("%s does not meet the selection criteria.\n", name);
    }

    return 0;
}
