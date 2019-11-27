/*
 *PROGRAM: To print number of words starting and ending with specific char
 *FILE: words.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 04/11/2019
 */

#include<stdio.h>
int main()
{
	char search, word[15], string[100];
	int i, k = 0, j = 0, count = 0;

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("The string is:-\n");
	printf("%s\n", string);
	
	printf("Which starting & ending char to search?\n");
	fgetc(stdin);
	scanf("%c", &search);

	START:
	for(i=j; string[i] != ' '; ++i)
		if(string[i] == '\0')
			break;
		else 
			word[k++] = string[i];

	word[k] = '\0';
	
	if(((word[0] == search) || ((word[0] + 32) == search)) && ((word[k-1] == search) || ((word[k-1] + 32) == search)))
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
		printf("\nNumber of words starting & ending with %c is %d\n", search, count);
	return 0;
}
