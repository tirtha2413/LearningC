#include <stdio.h>
void main()
{
  int a0width = 1189, a0height = 841,i; //Taking A0 paper height as a reference
  int sHeight, sWidth;
  for(i=0;i<=8;i++)
  {
      printf("Paper Type in mm A%d: %d, %d\n",i,a0width,a0height);
      sHeight = a0height;
      sWidth = a0width;
      a0height = sWidth/2;
      a0width = sHeight;
  }
}
