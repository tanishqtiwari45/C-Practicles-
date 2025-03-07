#include<stdio.h>
#include<conio.h>

void main()
{
    int initial_reading,final_reading,meter_no, consumed_units, bill;
    char consumer_name;   
    
    // main code
    
    printf("Enter the consumer name: ");
    scanf("%s",&consumer_name);
    printf("Enter Meter Number:  ");
    scanf("%d",&meter_no);
    printf("Enter Initial Reading: ");
    scanf("%d",&initial_reading);
    printf("Enter Final Reading: ");
    scanf("%d",&final_reading);
    consumed_units = final_reading - initial_reading;
    printf("Total Consumed Units are %d \n",consumed_units);
    bill = consumed_units * 3.50 ;
    printf("Your total bill of the month is %d ", bill);
    

    
    
    
    
    
}
