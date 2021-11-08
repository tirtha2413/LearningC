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
