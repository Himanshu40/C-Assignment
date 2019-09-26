/*
 *PROGRAM : To read a +ve integer and display as PERFECT number or not
 *FILE : perfectNum.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 23/09/2019
 */

#include<stdio.h>
int main()
{
	int num, i, result = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	for(i = 1; i <= (num/2); ++i)
		if(num % i == 0)
			result += i;

	if(result == num)
		printf("%d is a perfect number\n", num);
	else
		printf("%d is not a perfect number\n", num);

	return 0;
}
