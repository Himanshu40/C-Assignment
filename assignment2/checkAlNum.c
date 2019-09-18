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
	int conv;

	printf("Enter any key: ");
	scanf("%c", &key);

	conv = (int)key;

	if(((conv >= 48) && (conv <= 57)) || ((conv >= 65) && (conv <= 90)) || ((conv >= 97) && (conv <= 122)))
		printf("%c is alpha-numeric\n", key);
	else
		printf("The key pressed is not alpha-numeric\n");	

	return 0;
}
