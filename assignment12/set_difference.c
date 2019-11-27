#include<stdio.h>
int main()
{
        int array1[50], array2[50];
        int i, j, size1, size2, choice, r = 0;

        START:
        printf("\t---SET DIFFERENCE OPERATION---\n");
        printf("\nHow many elements you want for 1st array?\n");
        scanf("%d", &size1);
        printf("How many elements you want for 2nd array?\n");
        scanf("%d", &size2);

        if((size1 > 50) || (size2 > 50))
        {
                printf("\nSize exceeds more than 50. RETRY !!!\n");
                goto START;
        }
        else
        {
                printf("\nEnter the elements for 1st array:-\n");
                for(i=0; i<size1; ++i)          
                        scanf("%d", &array1[i]);

                printf("\nEnter the elements for 2nd array:-\n");
                for(i=0; i<size2; ++i)          
                        scanf("%d", &array2[i]);

		CHOICE:
		printf("\nWhich set differnce you want?\n");
		printf("1.Array1/Array2\n");
		printf("2.Array2/Array1\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:printf("\nArray1/Array2:-\n");
			       for(i=0; i<size1; ++i)
			       {
                        		for(j=0; j<size2; ++j)
						if(array1[i] != array2[j])
							r++;
					if(j == r)
					{
						printf("%d ", array1[i]);
						printf("\n");
					}
					r = 0;
			       } 		 	
			       break;
			case 2:printf("\nArray2/Array1:-\n");
			       for(i=0; i<size2; ++i)
			       {
					for(j=0; j<size1; ++j)
						if(array2[i] != array1[j])
							r++;
					if(j == r)
					{
						printf("%d ", array2[i]);
						printf("\n");
					}
					r = 0;
			       }
			       break;
			default:printf("\nINVALID CHOICE");
				goto CHOICE;
		}
        }

        return 0;
}

