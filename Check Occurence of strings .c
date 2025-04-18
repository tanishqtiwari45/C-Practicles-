/* Develop a program which will read a string and returns number of words in it*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, count = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] == ' ' || str[i] == '\n') && (i > 0 && str[i-1] != ' ' && str[i-1] != '\n')) {
            count++;
        }
    }

    if(strlen(str) > 1)
        count++;

    printf("Number of words: %d\n", count);

    return 0;
}

