#include<stdio.h>
int main()
{
        int n, i, j, num, arr1[20], choice = 1, count = 0;

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
                for(i=0; i<n; ++i)      //Printing the array
                        printf("%d ", arr1[i]);

                while(choice)
                {
                        printf("\nWhich number you want to delete?\n");
                        scanf("%d", &num);

                        for(i=0; i<n; ++i)      //Deleting no. in its proper place
				if(arr1[i] == num)
				{
					for(j=i; j<(n-count); j++)
						arr1[j] = arr1[j+1];
					count++;
				}			

                        printf("\nNumbers in an array after deletion:-\n");
                        for(i=0; i<(n-count); ++i)      //Printing the array
                                printf("%d ", arr1[i]);

                        printf("\nDo you want to delete anymore?(1 for T/0 for F)\n");
                        scanf("%d", &choice);
                }

	}

	return 0;
}
