#include<stdio.h>
int main()
{
	int n, i, arr1[20], arr2[20];

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

		printf("\n---Copying 1st array in reverse order into 2nd array---\n");

		for(i=0; i<n; ++i)
			arr2[i] = arr1[(n-1) - i];

		printf("\nPrinting 2nd array\n");
		for(i=0; i<n; ++i)
			printf("%d ", arr2[i]);

		printf("\n");
	}

	return 0;
}
