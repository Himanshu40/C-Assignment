/*
 *PROGRAM: To reverse a string
 *FILE: reverse.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 28/10/2019
 */

#include<stdio.h>
int main()
{
	char string[100], temp;
	int i = 0, len = 0;

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("\nThe String is:-\n");
	printf("%s", string);

	while(string[len])
		len++;

	while(i != (len/2))
	{
		temp = string[i];
		string[i] = string[len-1-i];
		string[len-1-i] = temp;
		i++;
	}
		
	printf("\n---Reversing the string---\n");
	printf("%s\n", string);

	return 0;
}

