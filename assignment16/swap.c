/*
 *PROGRAM: To swap two variables using call by reference
 *FILE: swap.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 22/11/2019
 */

#include<stdio.h>

void swap(int *p, int *q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int num1, num2;

	printf("Enter the value of num1 and num2:-\n");
	scanf("%d%d", &num1, &num2);

	printf("---BEFORE SWAPPING---\n");
	printf("NUM1 = %d and NUM2 = %d\n", num1, num2);

	swap(&num1, &num2);

	printf("---AFTER SWAPPING---\n");
	printf("NUM1 = %d and NUM2 = %d\n", num1, num2);

	return 0;
}
