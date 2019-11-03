#include<stdio.h>
int main()
{
	int i, rem, arr[20], index = 0, count = 0;
	long int num, temp;

	START:
	printf("Enter a number:- ");
	scanf("%ld", &num);

	temp = num;

	while(temp)
	{
		count++;
		temp /=10;
	}

	if(count>20)
	{
		printf("Range of digits is greater than 20. RETRY!!!\n");
		goto START;
	}
	else
	{
		temp = num;
		while(temp)
		{
			rem = temp%10;
			arr[index] = rem;
			index++;
			temp /= 10;
		}

		for(i=0; i<(index/2); ++i)
		{
			temp = arr[i];
			arr[i] = arr[(index-1)-i];
			arr[(index-1)-i] = temp;
		}	

		printf("\n---Number stored in array---\n");
		for(i=0; i<index; ++i)
			printf("%d ", arr[i]);

		printf("\n");
	}

	return 0;
}
