// C Program for converting Temperature from Celsius to Farenheit

#include<stdio.h>
#include<conio.h>

int main()
{
 float celsius, farenheit;
 printf(" Enter Temperature in Farenheit: ");
 scanf(" %f",&farenheit);
 
 celsius = (farenheit - 32) * 5 / 9;	
 printf(" The required temperature in Celsius is %.2f",celsius);
 return 0;
}
