/*Write a C program, which will print two digit numbers whose sum of both digit is multiple of
seven. e.g. 16,25,34......*/
#include<stdio.h>
void main()
{
    int i,num;
    for(i=10;i<=99;i++)
    {
       num = (i/10) + (i%10);
       if(num % 7 == 0)
       {
           printf("%d,",i);
       }
    }


}
