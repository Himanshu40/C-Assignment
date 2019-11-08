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
	printf("%s", string);
	printf("\n");

	return 0;
}

