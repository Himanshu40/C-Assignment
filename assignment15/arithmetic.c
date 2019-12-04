/*
 *PROGRAM: To perform arithmetic operations using functions
 *FILE: arithmetic.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 11/11/2019
 */

#include<stdio.h>

int add(int num1, int num2)
{
	return (num1+num2);
}

int sub(int num1, int num2)
{
	return (num1-num2);
}

int mul(int num1, int num2)
{
	return (num1*num2);
}

int div(int num1, int num2)
{
	return (num1/num2);
}

int mod(int num1, int num2)
{
	return (num1%num2);
}

int main()
{
	int num1, num2;

	printf("Enter the value of num1 and num2:- ");
	scanf("%d%d", &num1, &num2);

	printf("\n---ARITHMETIC OPERATIONS---\n");
	printf("%d + %d = %d\n", num1, num2, add(num1, num2));
	printf("%d - %d = %d\n", num1, num2, sub(num1, num2));
	printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
	printf("%d / %d = %d\n", num1, num2, div(num1, num2));
	printf("%d %% %d = %d\n", num1, num2, mod(num1, num2));

	return 0;
}
