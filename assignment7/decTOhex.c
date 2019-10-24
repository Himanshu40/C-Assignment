#include<stdio.h>
int main()
{
	int num, rem, temp, j, i = 0;
	char hexadec[50];

	printf("Enter any decimal number: ");
	scanf("%d", &num);

	temp = num;

	while(temp)
	{
		rem = temp % 16;
		if(rem < 10)
			hexadec[i++] = 48 + rem;
		else 
			hexadec[i++] = 55 + rem;
		temp /= 16;
	}

	printf("The hexadecimal of %d : ", num);
	for(j = i-1; j >= 0; j--)
		printf("%c", hexadec[j]);
	printf("\n");

	return 0;
}

