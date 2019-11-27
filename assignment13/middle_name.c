/*
 *PROGRAM: To print middle name of a name
 *FILE: middle_name.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 04/11/2019
 */

#include<stdio.h>
int main()
{
	char name[30];
	int i, j, space = 0;

	printf("Enter your name:-\n");
	scanf("%[^\n]", name);

	printf("\nYour name is %s\n", name);

	printf("\n---MIDDLE NAME---\n");
	for(i=0; name[i] != '\0'; ++i)
	{
		if(name[i] == ' ')
			space++;
		if(space == 1)
		{
			for(j=i+1; name[j] != ' '; ++j)
				printf("%c", name[j]);
			break;
		}
	}

	printf("\n");

	return 0;
}
