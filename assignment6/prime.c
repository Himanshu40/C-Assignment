/*
 *PROGRAM : To read a +ve integer and test & display as PRIME number or not
 *FILE : prime.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 23/09/2019
 */

#include<stdio.h>
int main()
{
	int num, i, point = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	for(i = 2; i <= (num/2); ++i)
		if(num %  i == 0)
		{
			point = 1;
			break;
		}

	if(num == 1)
		printf("1 is not a prime number\n");
	else if(point == 0)
		printf("%d is a prime number\n", num);
	else
		printf("%d is not a prime number\n", num);

	return 0;
}
