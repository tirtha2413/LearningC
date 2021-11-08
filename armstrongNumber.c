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
