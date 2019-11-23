#include<stdio.h>
#include<string.h>
int main()
{
	char string[10][50], word[50];
	int line, i;

	START:
	printf("How many lines you want ?\n");
	scanf("%d", &line);

	if(line < 2)
	{
		printf("Atleast give lines more than 2. RETRY !!!\n");
		goto START;
	}
	else
	{
		printf("Enter the string:-\n");
		fgetc(stdin);
		for(i=0; i<line; ++i)
			fgets(string[i], 50, stdin);

		printf("\nThe string is:-\n");
		for(i=0; i<line; ++i)
			printf("%s", string[i]);

		printf("\nEnter the string to insert in 2nd line:-\n");
		fgets(word, 50, stdin);
		
		for(i=line; i>1; --i)
			strcpy(string[i], string[i-1]);

		strcpy(string[i], word);

		printf("\n---NEW STRING---\n");
		for(i=0; i<(line+1); ++i)
			printf("%s", string[i]);	
	}

	return 0;
}
