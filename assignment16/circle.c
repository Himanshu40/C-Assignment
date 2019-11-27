/*
 *PROGRAM: To calculate area & circumference of circle using call by reference
 *FILE: circle.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 22/11/2019
 */

#include<stdio.h>

void operation(float p, float *area, float *perimeter)
{
	*area = 3.14*p*p;
	*perimeter = 2*3.14*p;
} 

int main()
{
	float radius, area, perimeter;

	printf("Enter the radius of the circle:-\n");
	scanf("%f", &radius);

	operation(radius, &area, &perimeter);

	printf("\nArea of circle = %f\n", area);
	printf("Circumference of circle = %f\n", perimeter);

	return 0;
}
