//Area of Trapezium

#include <stdio.h>
#include <stdlib.h>

int main (){

float a, b, h;
float area;

printf("Enter the value of two Base and Height of Trapezium\n ");
scanf("%f %f %f", &a,&b,&h);

area = 0.5 * (a + b) * h;

printf("\nArea of Trapezium ---> %f\n\n", area);

return 0;

}
