#include<stdio.h>
int main()
{
	char search, word[15], string[100];
	int i, l, k = 0, j = 0;

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("\nThe string is :-\n");
	printf("%s\n", string);
	
	printf("\nWhich specific alphabet to search?\n");
	fgetc(stdin);
	scanf("%c", &search);

	printf("\n---WORDS WITH SPECIFIC ALPHABET---\n");
	START:
	for(i=j; string[i] != ' '; ++i)
		if(string[i] == '\0')
			break;
		else 
			word[k++] = string[i];

	word[k] = '\0';
	
	for(l=0; word[l] != '\0'; ++l)
        	if((word[l] == search) || ((word[l] + 32) == search))
			printf("%s\n", word);

	if(string[i] == ' ')
	{	
		j = i+1;
		k = 0;
		goto START;
	}
	else if(string[i] == '\0')
		goto END;

	END:
		printf("\n");
	return 0;
}
