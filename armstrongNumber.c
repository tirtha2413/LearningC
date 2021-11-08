/*A number is called an Armstrong number if the sum of the cubes of the digits of the number is
equal to the number. For example 153 = 1^3 + 5^3 + 3^3. Write a C program that asks the user to
enter a number and returns if it is Armstrong or not.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int number,a,b,c,check;
    printf("Enter a 3 digit number:");
    scanf("%d",&number);
    a = number/100;
    b = (number%100)/10;
    c = (number%100)%10;
    a = pow(a,3);
    b = pow(b,3);
    c = pow(c,3);
    check = a + b + c;
    if(number == check)
    {
      printf("\nThe number is an Armstrong number");
    }
    else if(number != check)
    {
       printf("\nThe number is not an Armstrong number");
    }


}
