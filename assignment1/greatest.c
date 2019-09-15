/*
 *PROGRAM : To check greatest between three numbers
 *FILE : greatest.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 11/09/2019
 */

#include<stdio.h>
int main()
{
	int num1, num2, num3;

	printf("Enter the three numbers:\n");
	scanf("%d%d%d", &num1, &num2, &num3);

	if(num1>num2 && num1>num3)
		printf("Greatest of three numbers = %d\n", num1);
	else if(num2>num1 && num2>num3)
		printf("Greatest of three numbers = %d\n", num2);
	else if(num3>num1 && num3>num2)
		printf("Greatest of three numbers = %d\n", num3);
	else
		printf("All three integers are equal\n");

	return 0;
}
