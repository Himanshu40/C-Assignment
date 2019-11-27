/*
 *PROGRAM: To store & print even numbers in 2nd array and odd numbers in 3rd array
 *FILE: assign.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 21/10/2019
 */

#include<stdio.h>
int main()
{
	int n, i, arr1[20], even[20], odd[20], evenIndex = 0, oddIndex = 0;

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
		printf("Enter the numbers for 1st array:-\n");
		for(i=0; i<n; ++i)
			scanf("%d", &arr1[i]);

		printf("\nElements in the array:-\n");
		for(i=0; i<n; ++i)
			printf("%d ", arr1[i]);

		for(i=0; i<n; ++i)
			if(arr1[i] & 1)
			{
				odd[oddIndex] = arr1[i];
				oddIndex++; 
			}
			else
			{
				even[evenIndex] = arr1[i];
				evenIndex++;
			}

		printf("\n---Even numbers in 2nd array---\n");
		for(i=0; i < evenIndex; ++i)
			printf("%d ", even[i]);

		printf("\n");

		printf("\n---Odd numbers in 3rd array---\n");
		for(i=0; i < oddIndex; ++i)
			printf("%d ", odd[i]);

		printf("\n");
	}

	return 0;
}
