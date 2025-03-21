#include<stdio.h>

int main()
{
  float inch , centimeter ;

  printf(" Enter the value in centimeter :");

  scanf("%f", &centimeter);

  inch = centimeter/2.54 ;

  printf(" \n Inch : %f \n",inch);

  return 0 ;


}
