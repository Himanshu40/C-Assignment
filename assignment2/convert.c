/*
 *PROGRAM : To check and display an alphabet to upper case, another alphabet to lower case
 *FILE : convert.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 12/09/2019
 */

#include<stdio.h>
int main()
{
	char alph1, alph2, alph3;

	printf("Enter 1st alphabet: ");
	scanf("%c", &alph1);
        printf("Enter 2nd alphabet: ");
       	fgetc(stdin);	
        scanf("%c", &alph2);
        printf("Enter 3rd alphabet: ");
	fgetc(stdin);
        scanf("%c", &alph3);

	alph1 = alph1 & ~32;
	alph2 = alph2 | 32;
	alph3 = alph3 ^ 32;

	printf("---After Conversion---\n");
	printf("%c%c%c\n", alph1, alph2, alph3);

	return 0;
}

/*use below code to remove input buffer
int c;
while ((c = getchar()) != '\n' && c != EOF) { }
*/
