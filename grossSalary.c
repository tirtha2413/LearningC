/*Write a C program to accept the basic salary of an employee from the user. Calculate the gross
salary on the following basis:
Basic               HRA DA
1 - 4000            10% 50%
4001 - 8000         20% 60%
8001 - 12000        25% 70%
12000 and above    30% 80% */
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
