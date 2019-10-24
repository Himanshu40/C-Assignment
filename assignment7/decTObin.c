#include<stdio.h>
int main()
{
	int num, rem, temp, binary = 0, place = 1;

	printf("Enter any decimal number: ");
	scanf("%d", &num);

	temp = num;

	while(temp)
	{
		rem = temp % 2;
		binary += rem*place;
		place *= 10;
		temp /= 2;
	}

	printf("\nThe binary number of %d is %d\n", num, binary);

	return 0;
}
