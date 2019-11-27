/*
 *PROGRAM: To print ASCII equivalent of each char in 2D array
 *FILE: ascii.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 04/11/2019
 */

#include<stdio.h>
int main()
{
	char string[10][30];
	int i, n, j;

	printf("How many lines you want to input?\n");
	scanf("%d", &n);

	printf("Enter the string:-\n");
	fgetc(stdin);
	for(i=0; i<n; ++i)
		fgets(string[i], 30, stdin);

	printf("\nThe string is:-\n");
	for(i=0; i<n; ++i)
		printf("%s", string[i]);

	printf("\n---ASCII EQUIVALENT---\n");
	printf("CHARACTER\tASCII CODE\n");
	for(i=0; i<n; ++i)
		for(j=0; string[i][j] != '\0'; ++j)
			if(string[i][j] != 10)
				printf("%c\t\t%d\n", string[i][j], string[i][j]);

	return 0;
}
