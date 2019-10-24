#include<stdio.h>
int main()
{
	int num, rem, temp, decimal = 0, place = 1;

	printf("Enter the binary number: ");
	scanf("%d", &num);

	temp = num;

	while(temp)
	{
		rem = temp % 10;
		decimal += rem*place;;
		place *= 2;
		temp /= 10;
	}

	printf("The binary of %d is %d\n", num, decimal);

	return 0;
}
