/*
 *PROGRAM : To check an integer is STRONG number or not
 *FILE : strongNum.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 23/09/2019
 */

#include<stdio.h>
int main()
{
	long int num, temp, rem, x, fact = 1, result = 0;

	printf("Enter a number: ");
	scanf("%ld", &num);

	temp = num;

	while(temp)
	{
		rem = temp%10;
		for(x=rem; x>=1; x--)
			fact *= x;
		result += fact;
		temp /= 10;
		fact = 1;
	}

	if(num == result)
		printf("%ld is a strong number\n", num);
	else
		printf("%ld is not a strong number\n", num);

	return 0;
}

