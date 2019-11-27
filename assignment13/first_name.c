/*
 *PROGRAM: To print first name of a name
 *FILE: first_name.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 04/11/2019
 */

#include<stdio.h>
int main()
{
	char name[30];
	int i;

	printf("Enter your name:-\n");
	scanf("%[^\n]", name);

	printf("\nYour name is %s\n", name);

	printf("\n---FIRST NAME---\n");
	for(i=0; name[i] != ' '; ++i)
		printf("%c", name[i]);

	printf("\n");

	return 0;
}
