//Edvin Monzon
//CSC 321
//Lab #7

#include <stdio.h>
#include <stdlib.h>

double area(double base, double height);

int main(void)
{
	double base = 0;
	double height = 0;
	
	
	printf("Please enter the base of the triangle: ");
	scanf("%le",&base);

	printf("Please enter the height of the triangle: ");
	scanf("%le",&height);

	double triangle = area(base,height);
	
	printf("The area of the triangle is: %f \n ",triangle);
	

	return EXIT_SUCCESS;
}
double area(double base, double height)
{
	double area_Calc = 0.5 * base * height;
	return area_Calc;

}
