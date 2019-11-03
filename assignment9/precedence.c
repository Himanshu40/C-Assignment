#include<stdio.h>
int main()
{
	int n, i, j, l, temp, num, arr1[20], p=0, choice = 1;

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

		while(choice)
		{
			printf("\nWhich number you want to insert?\n");
			scanf("%d", &num);

			for(i=0; i<n; ++i)	//Inserting no. in its proper place
			{
				if(arr1[i] >= num)
				{
					for(j=n-1; j>=i; j--)
						arr1[j+1] = arr1[j];
					arr1[i] = num;
					break;
				}
				if(i == (n-1))
					arr1[n] = num;
			}
			n++;

                	printf("\nNumbers in an array after insertion to its proper place:-\n");
                	for(i=0; i<n; ++i)      //Printing the array
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
