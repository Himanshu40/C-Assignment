#include<stdio.h>
int main()
{
	int i, size, max, min, array[100];

	START:
	printf("How many elements you want?\n");
	scanf("%d", &size);
	
	if(size > 100)
	{
		printf("\nSize exceeds more than 100\n");
		goto START;
	}
	else
	{
		printf("\nEnter the elements:-\n");
		for(i=0; i<size; ++i)
			scanf("%d", &array[i]);

		printf("\nElements in the array:-\n");
		for(i=0; i<size; ++i)
			printf("%d ", array[i]);

		max = array[0];
		for(i=1; i<size; ++i)
			if(max <= array[i])
				max = array[i];

		min = array[0];
		for(i=1; i<size; ++i)
			if(min >= array[i])
				min = array[i];

		printf("\nLargest number in the array is %d", max);
		printf("\nSmallest number in the array is %d\n", min);
	}

	return 0;
}
