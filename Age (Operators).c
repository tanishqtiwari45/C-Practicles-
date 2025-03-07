#include <stdio.h>
#include <conio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("You are a junior kid.");
    } else if (age >= 18 && age < 25) 
	{
        printf("You are a college-going individual.");
    } else if (age >= 25 && age < 40) 
	{
        printf("You are a career-oriented person.");
    } else if (age >= 40 && age < 60) 
	{
        printf("You are a middle-aged person.");
    } else if (age >= 60) 
	{
        printf("You are very old.");
    }

    return 0;
}

