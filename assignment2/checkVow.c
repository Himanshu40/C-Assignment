/*
 *PROGRAM : To check a character entered from K/B as vowel or consonant
 *FILE : checkVow.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 12/09/2019
 */

#include<stdio.h>
int main()
{
	char key;

	printf("Enter any alphabet: ");
	scanf("%c", &key);

	if(key == 'A' || key == 'a' || key == 'E' || key == 'e' || key == 'I' || 
	   key == 'i' || key == 'O' || key == 'o' || key == 'U' || key == 'u')
		printf("%c is a vowel\n", key);
	else if((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z'))
		printf("%c is a consonant\n", key);
	else 
		printf("%c is not an alphabet\n", key);

	return 0;
}
