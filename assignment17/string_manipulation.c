#include<stdio.h>
#include<string.h>

void count_words(char *string)
{
	char search, word[10];
	int i, l, count, j=0, k = 0,check = 0;

	printf("Which specific char to search?\n");
	fgetc(stdin);
	scanf("%c", &search);

	START:
	for(i=j; *(string + i) != ' '; ++i)
		if(*(string + i) == '\0')
			break;
		else
		{
			*(word + k) = *(string + i);
			k++;
		}

	*(word + k) = '\0';

	for(l=0; *(word + l) != '\0'; ++l)
		if(*(word + l) == search)
		{
			check = 1;
			count++;
			break;
		}

	if(*(string + i) == ' ')
	{
		j = i+1;
		k = 0;
		goto START;
	}
	else if(*(string + i) == '\0')
		goto END;

	END:
	if(check == 0)
		printf("The specific char is not found\n");
	else
		printf("Total number of words with specific char %c is %d\n", search, count);

}

void concatenate(char *string)
{
	char newString[100];

	printf("Enter the new string:-\n");
	fgetc(stdin);
	scanf("%[^\n]s", newString);

	strcat(string, " ");
	strcat(string, newString);

	printf("\nThe new string---\n");
	printf("%s\n", string);
}

void last_word(char *string)
{
	char *space = strrchr(string, ' ');
	printf("Last word of a string is \"%s\"\n", space + 1);
}

void delete_words(char *string)
{
	char search, word[15], newString[200];
	int i, k = 0, j = 0;

	printf("Which starting char to search?\n");
	fgetc(stdin);
	scanf("%c", &search);

	*newString = '\0';

	START:
	for(i=j; *(string + i) != ' '; ++i)
		if(*(string + i) == '\0')
			break;
		else
		{
			*(word + k) = *(string + i);
			k++;
		}

	*(word + k) = '\0';

	if(*word != search)
	{
		strcat(newString, word);
		strcat(newString, " ");
	}

	if(*(string + i) == ' ')
	{
		j = i+1;
		k = 0;
		goto START;
	}
	else if(*(string + i) == '\0')
		goto END;

	END:
	printf("\n---New string after deletion---\n");
	printf("%s\n", newString);
	strcpy(string, newString);
}

int main()
{
	char string[200];

	printf("Enter the string:-\n");
	scanf("%[^\n]s", string);

	printf("The string is:-\n%s\n", string);

	count_words(string);
	concatenate(string);
	last_word(string);
	delete_words(string);
	concatenate(string);

	return 0;
}
