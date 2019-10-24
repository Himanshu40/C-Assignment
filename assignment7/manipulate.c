#include<stdio.h>
int main()
{
	int num, temp, count = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	temp = num;

	while(temp)
	{
		count++;
		temp /= 10;
	}

	temp = num;
	
	while(count)
	{
		rem = temp % 10;
		if(count % 2 != 0)
			printf("The square of %d is %d", );
		else
			printf("");
		temp /= 10;
		count--;
	}

	return 0;
}
