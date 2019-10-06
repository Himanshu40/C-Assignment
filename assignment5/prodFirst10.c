/*
 *PROGRAM : To print the product of first 10 +ve integers
 *FILE : first50.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 20/09/2019
 */

#include<stdio.h>
int main()
{
	int i, product = 1;

	for(i=1; i<=10; ++i)
		product *= i;

	printf("Product of first 10 +ve numbers = %d\n", product);

	return 0;
}
