/*
 *PROGRAM : To check if a triangle is equilateral or scalene or isosceles 
 *FILE : triangleLaw.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 14/09/2019
 */

#include<stdio.h>
int main()
{
	float side1, side2, side3;

	printf("Enter size of 1st side of a triangle: ");
	scanf("%f", &side1);
	printf("\nEnter size of 2nd side of a triangle: ");
	scanf("%f", &side2);
	printf("\nEnter size of 3rd side of a triangle: ");
	scanf("%f", &side3);
	if((side1+side2 > side3) && (side2+side3 > side1) && (side3+side2 > side1))
	{
		if(side1==side2 && side2==side3)
			printf("\nIt's an Equilateral triangle\n");
		else if(side1==side2 || side2==side3 || side1==side3)
			printf("\nIt's an Isosceles triangle\n");
		else	
			printf("\nIt's a Scalene triangle\n");
	}
	else
		printf("\nEntered size doesn't satisfy any triangle's law\n");

	return 0;
}
