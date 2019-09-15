/*
 *PROGRAM : To check if a number is a tech number or not
 *FILE : techN.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 11/09/2019
 */

#include<stdio.h>
int main()
{
	int num, rem1, rem2, techN;
	
	printf("Enter a 4-digit integer = ");
	scanf("%d", &num);

	if(sizeof(num) == 4)
	{
		rem1 = num/100;
		rem2 = num%100;
		techN = (rem1 + rem2)*(rem1 + rem2);
		if(num == techN)
			printf("%d is a tech number\n", num);
		else
			printf("%d is not a tech number\n", num);
	}
	else
		printf("You have entered %d digits\n", sizeof(num));

	return 0;
}
