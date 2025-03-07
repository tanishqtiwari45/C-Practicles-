/*Read temp in centigrade and if it more than 30 display message hot , if it is more than 40 very hot else normal.*/

#include <stdio.h>

int main() {
    float temp;
    printf("Enter the temperature in centigrade: ");
    scanf("%f", &temp);
    if (temp > 40) 
	{
        printf("Very hot\n");
    } else if (temp > 30) 
	{
        printf("Hot\n");
    } else {
        printf("Normal\n");
    }

    return 0;
}


