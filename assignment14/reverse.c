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

	printf("\n---BEFORE REVERSING---\n");
	for(i=0; i<line; ++i)
		printf("%s", string[i]);

	printf("\n---AFTER REVERSING---\n");
	for(i=0; i<line; ++i)
		for(j=strlen(string[i])-1; j>=0; j--)
			printf("%c", string[i][j]);
	printf("\n");

	return 0;
}
