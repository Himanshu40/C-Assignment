/*
 *PROGRAM : To check and display a key pressed by user as alpha-numeric or not
 *FILE : checkAlNum.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 12/09/2019
 */

#include<stdio.h>
int main()
{
	char key;

	printf("Enter any key: ");
	scanf("%c", &key);

	if(((key >= 'A') && (key <= 'Z')) || ((key >= 'a') && (key <= 'z')) || ((key >= '0') && (key <= '9')))
		printf("%c is alpha-numeric\n", key);
	else
		printf("The key pressed is not alpha-numeric\n");	

	return 0;
}
