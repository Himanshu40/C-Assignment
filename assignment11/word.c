#include<stdio.h>
int main()
{
	char string[100];
	int i = 0, count = 0;

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("\nThe String is:-\n");
	printf("%s", string);

	while(string[i])
	{
		if(string[i] == ' ')
			count++;
		i++;
	}

	printf("\nTotal number of words present in the string is %d\n", ++count);

	return 0;
}
