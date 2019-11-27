/*
 *PROGRAM: To search a char in a string
 *FILE: find.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 28/10/2019
 */

#include<stdio.h>
int main()
{
        char string[100], word;
        int i = 0, count = 0, check = 0;

        printf("Enter the string:-\n");
        scanf("%[^\n]", string);

        printf("\nThe String is:-\n");
        printf("%s", string);

	printf("\nWhich character to find?\n");
	fgetc(stdin);
	scanf("%c", &word);

        while(string[i])
        {
		if(string[i] == word)
		{
			check = 1;
			printf("%c is found at %d position\n", word, i+1);
			count++;
		}
		i++;
	}

	if(check == 1)
        	printf("\n%c is found %d times\n", word, count);
	else
		printf("\nSpecified Char didn't match in the string\n");

        return 0;
}

