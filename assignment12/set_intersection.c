/*
 *PROGRAM: To perform set intersection
 *FILE: set_intersection.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 24/10/2019
 */

#include<stdio.h>
int main()
{
        int array1[50], array2[50], array3[100];
        int i, j, size1, size2, r = 0;

        START:
        printf("\t---SET INTERSECTION OPERATION---\n");
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

                printf("\nEnter elements for 2nd array:-\n");
                for(i=0; i<size2; ++i)          
                        scanf("%d", &array2[i]);

                for(i=0; i<size1; ++i)
                        for(j=0; j<size2; ++j)
				if(array1[i] == array2[j])
					array3[r++] = array2[j];

                printf("\n\t---SET INTERSECTION OF TWO ARRAYS---\n");
                for(i=0; i<r; ++i)
                        printf("%d ", array3[i]);

                printf("\n");
        }

        return 0;
}
