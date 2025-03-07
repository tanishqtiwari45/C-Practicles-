#include <stdio.h>

int main() {
    float distance, time, fuel;
    printf("Enter the total distance to be traveled (in km): ");
    scanf("%f", &distance);
    time = distance / 50.0; 
    fuel = distance / 45.0; 

    printf("Total time required: %.2f hours\n", time);
    printf("Total fuel required: %.2f liters\n", fuel);

    return 0;
}
