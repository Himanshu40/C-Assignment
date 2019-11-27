/*
 *PROGRAM: To insert a char at specific position
 *FILE: insert.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 28/10/2019
 */

#include<stdio.h>
#include<string.h>
int main()
{
	char word, string[100];
	int i, len, pos;

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("\nThe string:-\n");
	printf("%s", string);

	printf("\nWhich character you want to insert?\n");
	fgetc(stdin);
	scanf("%c", &word);

	len = strlen(string);

	printf("\nAt which position you want to insert?\n");
	scanf("%d", &pos);

	for(i=len-1; i>=(pos-1); --i)
		string[i+1] = string[i];
	string[pos-1] = word;

	string[len+1] = '\0';

	printf("\n---NEW STRING---\n");
	printf("%s\n", string);

	return 0;
}

