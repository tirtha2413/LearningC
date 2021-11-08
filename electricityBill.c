/*An Electricity board charges the following rates for use of electricity.
For the First 200 units : Rs 1 per unit
For the next 100 units : Rs 1.5 per unit
Beyond 300 units : Rs 2 Per unit.
Write a C Program to read no of unit consumed and print out total charge amount.*/

#include <stdio.h>
void main()
{
    int units;
    float bill;
    printf("Enter the number of units:");
    scanf("%d",&units);
    if(units <= 300)
    {
       if(units <=200)
       {
         bill = units;
         printf("\nThe total charge in Rs: %f",bill);

       }
       else if(units > 200)
       {
         bill = 200 + ((units - 200)*1.5);
         printf("\nThe total charge in Rs: %f",bill);
       }

    }
    else if(units > 300)
    {
        bill = units * 2;
        printf("\nThe total charge in Rs: %f",bill);
    }

}
