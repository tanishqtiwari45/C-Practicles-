/* Read any name and print it for 20 times on the screen
read - Ankita
1 Ankita
2 Ankita
-
-
-
20 Ankita*/


#include <stdio.h>

void printName20Times(const char *name) {
	int i;
    for (i = 1; i <= 20; i++) {
        printf("%d %s\n", i, name);
    }
}

int main() {
    char name[100];
    
    printf("Enter a name: ");
    scanf("%99s", name);
    printName20Times(name);
    
    return 0;
}
