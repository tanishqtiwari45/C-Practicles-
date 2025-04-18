/* Convert cases of string */

#include <stdio.h>
#include <string.h>

void convertCase(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); // This will read only one word (until space)

    convertCase(str);

    printf("String after case conversion: %s\n", str);

    return 0;
}

