/*
 *PROGRAM: To search & replace a word in a string(e.g can replace single occurences and multiple occurences)
 *FILE: search.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 04/11/2019
 */

#include<stdio.h>
#include<string.h>
int main()
{
	char search[10], replace[10], word[15], string[100], new[150];
	int i, k = 0, j = 0, count = 0, check = 0;

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("The string is:-\n");
	printf("%s\n", string);
	
	printf("Which string to search?\n");
	fgetc(stdin);
	scanf("%s", &search);

	printf("Which word to replace with?\n");
	fgetc(stdin);
	scanf("%s", &replace);

	START: 				//This code can search single occurence and multiple occurences in a string
	for(i=j; string[i] != ' '; ++i)
		if(string[i] == '\0')
			break;
		else 
			word[k++] = string[i];

	word[k] = '\0';
	
	if(strcmp(word, search) == 0)
	{
		check = 1;
		strcat(new, replace);
		strcat(new, " ");
	}
	else
	{
		strcat(new, word);
		strcat(new, " ");
	}

	if(string[i] == ' ')
	{	
		j = i+1;
		k = 0;
		goto START;
	}
	else if(string[i] == '\0')
		goto END;

	END:
	if(check == 1)
	{
		printf("\nAfter replacing the string:-\n");
		puts(new);
	}
	else
		printf("\nThe string didn't match\n");

	return 0;
}
