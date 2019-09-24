#include<stdio.h>
#include<math.h>
int main()
{
	long int num, temp, rem, result = 0;

	printf("Enter a number: ");
	scanf("%ld", &num);

	temp = num;

	while(temp)
	{
		rem = temp%10;
		result += pow(rem, 3);
		temp /= 10;
	}

	if(num == result)
		printf("%ld is an armstrong number\n", num);
	else
		printf("%ld is not an armstrong number\n", num);

	return 0;
}
