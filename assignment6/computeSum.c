#include<stdio.h>
int main()
{
	int num, rem, temp, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	temp = num;
	
	while(temp)
	{
		rem = temp%10;
		sum += rem;
		temp /= 10;
	}

	printf("Entered number is %d\n", num);
	printf("The sum of its digits is %d\n", sum);

	return 0;
}
