/*
 *PROGRAM: To print lines containing more than 10 chars in 2D array
 *FILE: morethan10.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 06/11/2019
 */

#include<stdio.h>
#include<string.h>
int main()
{
	char string[10][50];
	int line, i, j;

	printf("How many lines you want ?\n");
	scanf("%d", &line);

	printf("Enter the string:-\n");
	fgetc(stdin);
	for(i=0; i<line; ++i)
		fgets(string[i], 50, stdin);

	printf("\nThe string is:-\n");
	for(i=0; i<line; ++i)
		printf("%s", string[i]);

	printf("\nLines containing more than 10 chars:-\n");
	for(i=0; i<line; ++i)
		if(strlen(string[i]) > 10)
			printf("%s", string[i]);

	return 0;
}
