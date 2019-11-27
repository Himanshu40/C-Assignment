/*
 *PROGRAM: To print number of words whose lenght is more than 3
 *FILE: moreThan3.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 04/11/2019
 */

#include<stdio.h>
#include<string.h>
int main()
{
	char word[15], string[100];
	int i, k = 0, j = 0, count = 0;

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("The string is:-\n");
	printf("%s\n", string);

	START:
	for(i=j; string[i] != ' '; ++i)	
		if(string[i] == '\0')
			break;
		else 
			word[k++] = string[i];

	word[k] = '\0';
	
	if(strlen(word) > 3)
		count++;

	if(string[i] == ' ')
	{	
		j = i+1;
		k = 0;
		goto START;
	}
	else if(string[i] == '\0')
		goto END;

	END:
		printf("\nNumber of words whose length more than 3 is %d\n", count);
	return 0;
}
