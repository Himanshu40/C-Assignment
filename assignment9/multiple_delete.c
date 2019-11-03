#include<stdio.h>
int main()
{
        int n, i, j, arr1[20], arr2[20], p = 0;

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
                printf("Enter the numbers into an array:\n");
                for(i=0; i<n; ++i)
                        scanf("%d", &arr1[i]);

                printf("\nNumbers in an array:-\n");
                for(i=0; i<n; ++i)
                        printf("%d ", arr1[i]);

		for(i=0; i<n; ++i)
		{
			for(j=0; j<p; j++)
				if(arr1[i] == arr2[j])
					break;
			if(j == p)
				arr2[p++] = arr1[i];
		}

		printf("\n---Deleting multiple occurences in an array---\n");

		for(i=0; i<p; ++i)
			printf("%d ", arr2[i]);

		printf("\n");

	}
	
	return 0;
}
