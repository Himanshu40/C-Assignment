/*
 *PROGRAM : To check a character entered as vowel or consonant, alphabet or not  
 *FILE : check.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 19/09/2019
 */

#include<stdio.h>
int main()
{
	char key;

	printf("Enter a character: ");
	scanf("%c", &key);

	if((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z'))
		switch(key)
		{	
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u': printf("\n%c is a vowel\n", key);
				  break;
			default:  printf("\n%c is a consonant\n", key);		
		}
	else
		printf("\nThe entered character is not a alphabet\n");

	return 0;
}
