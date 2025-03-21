# include<stdio.h>
 int main()

 {
    float height ,base ,area ;

    printf(" Enter the height of the triangle: ");

    scanf("%f", &height);


    printf(" Enter the base of the triangle:  ");

    scanf("%f", &base);

    area = (1.0/2.0) * (height * base) ;

    printf(" Area of the triangle : %f", area);

    return 0 ;



 }
