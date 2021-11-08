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
