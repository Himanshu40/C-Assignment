/*
 *PROGRAM : To check and display a key pressed by user as alphabet, digit, space, printable, control key separately
 *FILE : checkKey.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 12/09/2019
 */

#include<stdio.h>
#include<ctype.h>
int main()
{
	char key;
	
	printf("Enter any key: ");
	scanf("%c", &key);

	if(isprint(key))
	{
		printf("The key pressed is printable\n");
		if(isdigit(key))
			printf("The key pressed is digit\n");
		else if(isalpha(key))
			printf("The key pressed is alphabet\n");
		else if(isspace(key))
			printf("The key pressed is space\n");
		else if(ispunct(key))
			printf("The key pressed is punctuation\n");
	}
	else if(iscntrl(key))
	{
		printf("The key pressed is non-printable\n");
		printf("The key pressed control key\n");
	}
	else 
		printf("The key pressed can't be found\n");	

	return 0;
}
