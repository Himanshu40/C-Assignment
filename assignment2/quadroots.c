/*
 *PROGRAM : To find and display the roots of a quadratic equation a*x^2 + b*x + c
 *FILE : quadroots.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 12/09/2019
 */

#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, disc, root1, root2;

	printf("Enter coefficients of a, b and c: ");
	scanf("%f%f%f", &a, &b, &c);

	disc = (b*b)-(4*a*c);

	if(disc > 0)
	{
		root1 = (-b+sqrt(disc))/(2*a);
		root2 = (-b-sqrt(disc))/(2*a);

		printf("\nroot 1 = %.2f and root 2 = %.2f\n", root1, root2);
	}
	else if(disc == 0)
	{
		root1=root2=(-b/(2*a));

		printf("\nroot 1 = %.2f and root 2 = %.2f\n", root1, root2);
	}	
	else
		printf("\nDiscriminant is less than 0. So it has imaginary roots\n");

	return 0;
}
