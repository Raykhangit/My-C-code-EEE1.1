#include<stdio.h>

int main()

{
float celcius ,fahrenheit ;

printf(" Enter temperature in Celsius : ");

scanf("%f", &celcius);

fahrenheit = (celcius * 9/5 )+ 32 ;

printf( " \n Temperature in Fahrenheit :%f\n " , fahrenheit);


return 0 ;


}
