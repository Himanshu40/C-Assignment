//To swap two numbers without using third variable

#include<stdio.h>
int main()
{
	int num1, num2;
	
	printf("Enter two numbers:\n");
	scanf("%d%d", &num1, &num2);
	
	printf("---BEFORE SWAPPING---\n");
	printf("Value of num1 = %d\n", num1);
	printf("Value of num2 = %d\n", num2);

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	printf("---AFTER SWAPPING---\n");
	printf("Value of num1 = %d\n", num1);
	printf("value of num2 = %d\n", num2);

	return 0;
}
