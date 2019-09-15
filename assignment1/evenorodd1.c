/*
 *PROGRAM : To check if a number is even or odd using bitwise AND 
 *FILE : evenorodd.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 11/09/2019
 */

#include<stdio.h>
int main()
{
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	if(num & 1)
		printf("%d is a odd number\n", num);
	else
		printf("%d is an even number\n", num);

	return 0;
}
