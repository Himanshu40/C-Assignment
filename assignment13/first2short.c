#include<stdio.h>
int main()
{
	char word[15], string[50];
	int i, k = 0, j = 0;

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("The string is :-\n");
	printf("%s\n", string);

	printf("\n---FIRST TWO SHORT NAME---\n");
	START:
	for(i=j; string[i] != ' '; ++i)
	{
		if(string[i] == '\0')
			break;
		else 
			word[k] = string[i];
		k++;
	}

	word[k] = '\0';

	if(string[i] == '\0')
		printf("%s", word);
	else
		printf("%c ", word[0]);

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
