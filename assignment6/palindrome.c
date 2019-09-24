#include<stdio.h>
int main()
{
	int num, rem, temp, reverseNum = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	temp = num;

	while(temp)
	{
		rem = temp%10;
		reverseNum = reverseNum*10 + rem;
		temp /= 10;
	}

	if(num == reverseNum)
		printf("%d is palindrome\n", num);
	else
		printf("%d is not palindrome\n", num);	

	return 0;
}

