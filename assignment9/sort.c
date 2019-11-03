#include<stdio.h>
int main()
{
        int n, i, j, temp, arr1[20];

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

		for(i=0; i<n; ++i) //Sorting integers in ascending order using insertion sort
		{
			temp = arr1[i];
			j = i-1;
			while((temp < arr1[j]) && (j >= 0))
			{
				arr1[j+1] = arr1[j];
				j--;
			}
			arr1[j+1] = temp;
		}

		printf("\n---Sorting elements in ascending order---\n");
                printf("Elements in an array:-\n");
                for(i=0; i<n; ++i)
                        printf("%d ", arr1[i]);

		printf("\n");
	}

	return 0;
}
