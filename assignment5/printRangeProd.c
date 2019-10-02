/*
 *PROGRAM : To print the product from range n1 to n2 for +ve int
 *FILE : printRangeProd.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : /09/2019
 */

#include<stdio.h>
int main()
{
	int n1, n2, product = 1, i;

	printf("Enter the range to get the product: ");
	scanf("%d%d", &n1, &n2);

	for(i=n1; i<=n2; ++i)
		product *= i;

	printf("The product from the range of %d to %d is %d\n", n1, n2, product);

	return 0;
}
