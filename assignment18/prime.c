#include<stdio.h>
#include<stdlib.h>

int isprime(int num, int x)
{
	if(x == 1)
		return 1;
	else
	{
		if(num % x == 0)
			return 0;
		else
			isprime(num, x-1);
	}
}

int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if(num == 1 || num == 0)
	{
		printf("\n%d is not a prime number\n", num);
		exit(0);
	}
	
	if(isprime(num, num/2) == 1)
		printf("\n%d is a prime number\n", num);
	else
		printf("\n%d is not a prime number\n", num);
	
	return 0;
}
