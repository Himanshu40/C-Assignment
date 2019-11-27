/*
 *PROGRAM: To print 2nd largest and 2nd smallest number in an array
 *FILE: find.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 21/10/2019
 */

#include<stdio.h>
int main()
{
	int n, i, j, l, temp, arr1[20], p=0;

	START:
	printf("How much numbers you want to input?(Limit 20)\n");
	scanf("%d", &n);

        if(n>20)
        {
                printf("Range is above than 20. RETRY!!!\n");
                goto START;
        }
	else
	{
		printf("Enter the numbers into an array:\n");
		for(i=0; i<n; ++i)	//Sorting during input of numbers into an array in ascending order
		{
			scanf("%d", &temp);
			for(j=0; j<p; ++j)
				if(temp <= arr1[j]) //To keep duplicate numbers
					break;
			for(l=p-1; l>=j; l--)
				arr1[l+1] = arr1[l];
			arr1[j] = temp;
			p++;
		}

		printf("\nNumbers in an array:-\n");
		for(i=0; i<n; ++i)	//Printing the array
			printf("%d ", arr1[i]);
		printf("\n");

		printf("\n2nd largest number in an array is %d\n", arr1[n-2]);
		printf("2nd smallest number in an array is %d\n", arr1[1]);
	}

	return 0;
}
