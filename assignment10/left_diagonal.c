/*
 *PROGRAM: To print left diagonal of a matrix
 *FILE: left_diagonal.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 24/10/2019
 */

#include<stdio.h>
int main()
{
	int row, col, i, j, matrix[10][10];

	START:
	printf("Enter the matrix size: ");
	scanf("%d%d", &row, &col);

	if((row != col) || (row > 10 && col > 10))
	{
		printf("\nEntered size is more than 10x10 or not a square matrix\n");
		goto START;
	
	}
	else
	{
		printf("\nEnter the matrix elements:-\n");
		for(i=0; i<row; ++i)
			for(j=0; j<col; ++j)
				scanf("%d", &matrix[i][j]);

		printf("\nMATRIX ELEMENTS\n");
		for(i=0; i<row; ++i)
		{
			for(j=0; j<col; ++j)
				printf("%d ", matrix[i][j]);
			printf("\n");
		}

		printf("\n---LEFT DIAGONAL OF THE MATRIX---\n");
		for(i=0; i<row; ++i)
			printf("%d ", matrix[i][i]);

		printf("\n");
	}

	return 0;
}
