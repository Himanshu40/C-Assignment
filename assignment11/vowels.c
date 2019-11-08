#include<stdio.h>
int main()
{
	int i = 0, count = 0;
	char string[100];

	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	printf("\nThe String is:-\n");
	printf("%s", string);

	while(string[i])
	{
		if(string[i] == 'a' || string[i] == 'A' || 
		   string[i] == 'e' || string[i] == 'E' ||
		   string[i] == 'i' || string[i] == 'I' ||
		   string[i] == 'o' || string[i] == 'O' ||
		   string[i] == 'u' || string[i] == 'U')
			count++;
		i++;
	}

	printf("\nTotal number of vowels present in a string is %d\n", count);

	return 0;
}
