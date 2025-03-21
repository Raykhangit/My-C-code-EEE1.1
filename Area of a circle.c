#include<stdio.h>
int main()
{
float radius, pie ,area ;

pie=3.1416;

printf("Enter the radius of the circle :");

scanf("%f", &radius);

area= pie*radius*radius;

printf("\nArea :%f\n",area);

return 0 ;


}
