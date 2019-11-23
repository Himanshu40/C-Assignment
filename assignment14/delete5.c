#include<stdio.h>
#include<string.h>
int main()
{
	char string[10][50], word[50];
	int line, i;

	START:
	printf("How many lines you want ?\n");
	scanf("%d", &line);

	if(line < 5)
	{
		printf("Atleast give lines more than 5. RETRY !!!\n");
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
		
		for(i=4; i<line; ++i)
			strcpy(string[i], string[i+1]);

		printf("\n---NEW STRING AFTER DELETING 5TH LINE---\n");
		for(i=0; i<(line-1); ++i)
			printf("%s", string[i]);	
	}

	return 0;
}
