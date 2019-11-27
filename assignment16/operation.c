/*
 *PROGRAM: To perform arithmetic operations using call by reference
 *FILE: operation.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 22/11/2019
 */

#include<stdio.h>

void operation(int num1, int num2, int *sum, int *sub, int *mul, int *div, int *mod)
{
	*sum = num1+num2;
	*sub = num1-num2;
	*mul = num1*num2;
	*div = num1/num2;
	*mod = num1%num2;
}

int main()
{
	int num1, num2, sum, sub, mul, div, mod;

	printf("Enter NUM1 and NUM2:-\n");
	scanf("%d%d", &num1, &num2);

	operation(num1, num2, &sum, &sub, &mul, &div, &mod);

	printf("SUM = %d\n", sum);
	printf("SUBTRACT = %d\n", sub);
	printf("MULTIPLICATION = %d\n", mul);
	printf("DIVISON = %d\n", div);
	printf("MOD = %d\n", mod);

	return 0;
}
