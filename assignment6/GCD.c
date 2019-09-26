/*
 *PROGRAM : To find GCD of two numbers
 *FILE : GCD.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 23/09/2019
 */

#include<stdio.h>
int main()
{
	int num1, num2, i, gcd;

	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);

	for(i = 1; i <= num1 || i <= num2; ++i)
		if(num1 % i == 0 && num2 % i == 0)
			gcd = i;

	printf("G.C.D of %d and %d = %d\n", num1, num2, gcd);

	return 0;
}
