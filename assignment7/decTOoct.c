/*
 *PROGRAM : To convert decimal number into octal number
 *FILE : decTOoct.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 27/09/2019
 */

#include<stdio.h>
int main()
{
	int num, rem, temp, octal = 0, place = 1;

	printf("Enter any decimal number: ");
	scanf("%d", &num);

	temp = num;

	while(temp)
	{
		rem = temp % 8;
		octal += rem*place;
		place *= 10;
		temp /= 8;
	}

	printf("\nThe octal number of %d is %d\n", num, octal);

	return 0;
}

