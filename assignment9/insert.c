/*
 *PROGRAM: To insert a number in an array
 *FILE: insert.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 23/10/2019
 */

#include<stdio.h>
int main()
{
	int n, i, num, arr1[20], choice = 1;

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
		printf("Enter the numbers for an array:-\n");
		for(i=0; i<n; ++i)
			scanf("%d", &arr1[i]);

		printf("\nElements in an array:-\n");
		for(i=0; i<n; ++i)
			printf("%d ", arr1[i]);

		while(choice)
		{
			printf("\nWhich number you want to insert?\n");
			scanf("%d", &num);

			n++;
			arr1[n-1] = num;

                	printf("\nElements in an array after a given no.:-\n");
               	 	for(i=0; i<n; ++i)
                        	printf("%d ", arr1[i]);

			if(n > 20)
			{
				printf("\nYou can't insert furthermore\n");
				break;
			}

			printf("\nDo you want to insert anymore?(1 for T/0 for F)\n");
			scanf("%d", &choice);
		}

	}

	return 0;
}
