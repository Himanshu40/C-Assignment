/*
 *PROGRAM : To convert decimal number into binary number
 *FILE : decTObin.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 27/09/2019
 */

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
