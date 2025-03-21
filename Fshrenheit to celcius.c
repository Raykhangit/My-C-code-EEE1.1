#include<stdio.h>

int main ()

{
  float celsius , fahrenheit ;

  printf(" Enter temperature value in Fahrenheit :");

  scanf("%f" ,&fahrenheit);

  celsius = ( fahrenheit -32)* 5/9 ;

  printf("\n Temperature value in Celsius: %f \n" , celsius);

  return 0;




}
