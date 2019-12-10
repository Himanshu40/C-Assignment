#include<stdio.h>

int gcd(int num1, int num2)		//assuming num1 > num2
{
	int rem;
	
	rem = num1 % num2;
	if(rem == 0)
		return num2;
	else
		return (gcd(num2, rem));
}

int main()
{
	int num1, num2;

	printf("Enter the two numbers: ");
	scanf("%d%d", &num1, &num2);

	printf("\nGCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));

	return 0;
}
