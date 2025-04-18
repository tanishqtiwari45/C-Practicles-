/* Program which will returns number of occurrences of a character in a string */


#include <stdio.h>
#include <string.h>

int countCharacter(char str[], char ch) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], ch;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character to count: ");
    scanf("%c", &ch);

    int result = countCharacter(str, ch);

    printf("Character '%c' occurred %d times.\n", ch, result);

    return 0;
}

