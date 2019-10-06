/*
 *PROGRAM : To print the sum of first 30 +ve integers
 *FILE : sumFirst30.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 20/09/2019
 */

#include<stdio.h>
int main()
{
	int i, sum = 0;

	for(i=1; i<=30; ++i)
		sum += i;

	printf("Sum of first 30 +ve integers = %d\n", sum);

	return 0;
}
