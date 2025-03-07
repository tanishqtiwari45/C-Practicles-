#include<stdio.h>
#include<conio.h>


int main()
{
    int r,d,a,c;
    printf(" Enter the radius of the Circle: ");
    scanf("%d",&r);
    d = 2*r;
    a = 3.14159265359*r*r;
    c = 2*3.14159265359*r;
    printf(" The Diameter of Circle is: %d \n",d);
    printf(" The Area of Circle is: %d \n",a);
    printf(" The Circumeference of Circle is: %d",c);
    
}
