/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8*/ 
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
