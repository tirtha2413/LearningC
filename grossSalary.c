/*Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary */
#include <stdio.h>
void main()
{
    float baseSal, hrAllowance, daAllowance, grossSal;
    printf("Enter the Basic Salary\n");
    scanf("%f",&baseSal);
    daAllowance = (baseSal * 4)/10.00;
    hrAllowance = baseSal / 5.00;
    grossSal = baseSal + daAllowance + hrAllowance;
    printf("Gross Salary is %f",grossSal);

}
