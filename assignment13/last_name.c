#include<stdio.h>
int main()
{
	char string[50], last_name[10];
	int i, j, pos, spaceCount = 0, lastCount = 0;

	printf("Enter your name:-\n");
	scanf("%[^\n]", string);

	printf("\nYour name is %s\n", string);

	printf("Printing sur name with first name & middle name\n");

	for(i=0; string[i] != '\0'; ++i)
	{
		if(string[i] == ' ')
		{
			pos = i;
			j = i+1;
			spaceCount++;
		}
		if(spaceCount == 2)
			lastCount++;
	}

	for(i=0; i<lastCount; ++i)
		last_name[i] = string[j++];

	string[pos] = '\0';

	printf("%s %s\n", last_name, string);
		

	return 0;
}
