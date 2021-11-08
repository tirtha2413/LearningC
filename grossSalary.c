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
