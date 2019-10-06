/*
 *PROGRAM : To find the area of circle, rectangle, square, triangle using switch case 
 *FILE : area.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 19/09/2019
 */

#include<stdio.h>
#include<math.h>
int main()
{
	float operand1, operand2;
	int choice;

	printf("---AREA FINDER---\n");
	printf("1.Area of a triangle\n");
	printf("2.Area of a reactangle\n");
	printf("3.Area of a circle\n");
	printf("4.Area of a square\n");
	printf("\nEnter a choice: ");
	scanf("%d", &choice);	

	switch(choice)
	{
		case 1: printf("\nEnter the base of the triangle(in cm): ");
			scanf("%f", &operand1);
			printf("Enter the height of the triangle(in cm): ");
			scanf("%f", &operand2);
			printf("\nArea of the trinagle is %.2f cm^2\n", (1.0/2*operand1*operand2));
			break;
		case 2: printf("\nEnter the length of the rectangle(in cm): ");
			scanf("%f", &operand1);
			printf("Enter the breadth of the rectangle(in cm): ");
			scanf("%f", &operand2);
			printf("\nArea of the rectangle is %.2f cm^2\n", (operand1*operand2));
			break;
		case 3: printf("\nEnter the radius of the circle(in cm): ");
			scanf("%f", &operand1);
			printf("\nArea of the circle is %.3f cm^2\n", (M_PI * operand1 * operand1));
			break;
		case 4: printf("\nEnter the side of the square(in cm): ");
			scanf("%f", &operand1);
			printf("\nArea of the square is %.2f cm^2\n", (operand1 * operand1));
			break;
		default:printf("\nINVALID CHOICE\n"); 
	}

	return 0;
}
