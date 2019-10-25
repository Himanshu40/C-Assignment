/*
 *PROGRAM : To convert odd position digits numbers into cube and for even position digits into square
 *FILE : binTOdec.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 23/09/2019
 */

#include<stdio.h>
int main()
{
	int num, temp, rem, count = 0;

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
		if(count % 2 == 0)
			printf("\nThe square of %d is %d", rem, (rem*rem));
		else
			printf("\nThe cube of %d is %d", rem, (rem*rem*rem));
		temp /= 10;
		count--;
	}
	printf("\n");

	return 0;
}
