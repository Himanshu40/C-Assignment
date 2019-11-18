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
