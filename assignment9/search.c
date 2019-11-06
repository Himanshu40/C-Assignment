#include<stdio.h>
int main()
{
        int n, i, j, num, arr1[20], choice = 1;

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

			DELETE:
                        for(i=0; i<n; ++i)      //Deleting no. in its proper place
				if(arr1[i] == num)
					break;

			if(i<n)
			{
				n--;
				for(j=i; j<n; j++)
					arr1[j] = arr1[j+1];
				goto DELETE;
			}			

                        printf("\nNumbers in an array after deletion:-\n");
                        for(i=0; i<n; ++i)      //Printing the array
                                printf("%d ", arr1[i]);

			if(n == 0)
			{
				printf("\nYou can't delete anymore!!!\n");
				break;
			}

                        printf("\nDo you want to delete anymore?(1 for T/0 for F)\n");
                        scanf("%d", &choice);
                }

	}

	return 0;
}
