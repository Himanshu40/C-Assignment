#include<stdio.h>
int main()
{
	int n, i, arr1[20], count = 0;

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
		for(i=0; i<n; i++)
			printf("%d ", arr1[i]);

		for(i=0; i<n-1; ++i)
			if((arr1[i]+arr1[i+1]) > 20)
				count++;

		printf("\nTotal number of pair of elements whose sum is more than 20 is %d\n", count);
	}

	return 0;
}

