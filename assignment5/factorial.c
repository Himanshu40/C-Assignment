#include<stdio.h>
int main()
{
	long int num, i, fact = 1;

	printf("Enter the number to get the factorial = ");
	scanf("%ld", &num);

	for(i=num; i>=1; --i)
		fact *= i;

	printf("The factorial of %d is %d\n", num, fact);

	return 0;
}
