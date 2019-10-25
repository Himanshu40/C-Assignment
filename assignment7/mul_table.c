/*
 *PROGRAM : To display multiplication table of any integer
 *FILE : mul_table.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 23/09/2019
 */

#include<stdio.h>
int main()
{
	int i, num;

	printf("Enter a number to get the multiplication table: ");
	scanf("%d", &num);
	printf("\nMULTIPLICATION TABLE OF %d\n", num);

	for(i=1; i<=10; ++i)
		printf("\n%d * %d = %d", num, i, num*i);

	printf("\n");

	return 0;
}
