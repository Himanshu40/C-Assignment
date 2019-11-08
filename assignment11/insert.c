#include<stdio.h>
#include<string.h>
int main()
{
	char word, string[100];
	int i, len, pos;

	printf("Enter any word:-\n");
	scanf("%[^\n]", string);

	printf("\nThe word is:-\n");
	printf("%s", string);

	printf("\nWhich character you want to insert?\n");
	fgetc(stdin);
	scanf("%c", &word);

	len = strlen(string);

	printf("\nAt which position you want to insert?\n");
	scanf("%d", &pos);

	for(i=len-1; i>=(pos-1); --i)
		string[i+1] = string[i];
	string[pos-1] = word;

	printf("\n---NEW WORD---\n");
	printf("%s\n", string);

	return 0;
}

