#include<stdio.h>
int main()
{
	int n, arr1[20], i, num, pos, count = 0;

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

		printf("Which number you want to search?\n");
		scanf("%d", &num);

		for(i=0; i<n; ++i)
			if(num == arr1[i])
			{
				printf("The %d is found at %d position of the array\n", num, i+1);
				count++;
			}

		printf("The %d is found %d times in an array\n", num, count);		
	}


	return 0;
}
