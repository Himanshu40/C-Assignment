#include<stdio.h>
#include<string.h>
int main()
{
	char string[100], temp;
	int i, j, len;
	
	printf("Enter the string:-\n");
	scanf("%[^\n]", string);

	len = strlen(string);

	for(i=0; i<len; ++i)
		for(j=0; j<(len-i-1); ++j)
			if(string[j] < string[j+1])
			{
				temp = string[j];
				string[j] = string[j+1];
				string[j+1] = temp;
			}

	printf("\nReversing in descending order:-\n");
	printf("%s\n", string);

	return 0;
}
