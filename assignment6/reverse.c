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

	printf("The reverse of %d is %d\n", num, reverseNum);	

	return 0;
}
