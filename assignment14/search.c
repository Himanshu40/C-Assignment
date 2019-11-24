#include<stdio.h>
#include<string.h>
int main()
{
	char string[10][50], word[10], search[10];
	int line, i, k, l = 0, m = 0;

	printf("How many lines you want ?\n");
	scanf("%d", &line);

	printf("Enter the string:-\n");
	fgetc(stdin);
	for(i=0; i<line; ++i)
		fgets(string[i], 50, stdin);

	printf("\nThe string is:-\n");
	for(i=0; i<line; ++i)
		printf("%s", string[i]);

	printf("\nWhich word to search?\n");
	scanf("%s", search);

	i = 0;
	START:
	for(k=l; string[i][k] != ' '; ++k)
		if(string[i][k] == '\0')
			break;
		else if(string[i][k] != '\n')
			word[m++] = string[i][k]; 

	word[m] = '\0';

	if(strcmp(word, search) == 0)
		printf("\n%s is found in line %d", search, i+1);

	if(string[i][k] == ' ' || string[i][k] == '\0')
	{
		if(string[i][k] == '\0')
		{
			if(i == (line-1))
				goto END;
			else
			{
				i++;
				l = 0;
				m = 0;
				goto START;
			}			
		}
		else
		{
			l = k+1;
			m = 0;
			goto START;
		}
	}

	END:
	printf("\n");
        
	return 0;
}
