#include<stdio.h>
int main()
{
	char string[100];
	int i;

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("\n---ASCII EQUIVALENT---\n");
	printf("CHARACTER\tASCII CODE\n");
	for(i=0; string[i] != '\0'; ++i)
		printf("%c\t\t%d\n", string[i], string[i]);

	return 0;
}
