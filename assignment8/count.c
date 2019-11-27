/*
 *PROGRAM: To count number of even numbers and odd numbers in an array
 *FILE: count.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 21/10/2019
 */

#include<stdio.h>
int main()
{
	int n, i, arr1[20], even = 0, odd = 0;

	START:
	printf("How much numbers you want to input?\n");
	scanf("%d", &n);

	if(n>20)
	{
		printf("Range is above than 20. RETRY!!!\n");
		goto START;
	}
	else
	{
		printf("Enter the numbers into an array:-\n");
		for(i=0; i<n; ++i)
			scanf("%d", &arr1[i]);

		printf("\nElements in the array:-\n");
		for(i=0; i<n; ++i)
			printf("%d ", arr1[i]);

		for(i=0; i<n; ++i)
			if(arr1[i] & 1)
				odd++;
			else
				even++;

		printf("\nNumber of even numbers = %d\n", even);
		printf("Number of odd numbers = %d\n", odd);
	}

	return 0;
}
