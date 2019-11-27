/*
 *PROGRAM: To print "INDIA" in right-angled triangle pattern
 *FILE: pattern.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 04/11/2019
 */

#include<stdio.h>
int main()
{
	char word[] = {'I', 'N', 'D', 'I', 'A'};
	int i, j;

	printf("Given Word:-\n");
	printf("\t%s\n", word);
	printf("---THE PATTERN---\n");

	for(i=0; i<5; ++i)
	{
		for(j=0; j<=i; ++j)
			printf("%c ", word[j]);
		printf("\n");
	}
	
	return 0;
}
