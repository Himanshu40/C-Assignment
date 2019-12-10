#include<stdio.h>

long int power(long int num1, long int num2)
{
	if(num2 == 0)
		return 1;
	else
		return (num1 * power(num1, num2-1));
}

int main()
{
	long int num1, num2;

	printf("Enter a number and it's power: ");
	scanf("%ld%ld", &num1, &num2);

	printf("%ld ^ %ld = %ld\n", num1, num2, power(num1, num2));

	return 0;
}
