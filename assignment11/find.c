#include<stdio.h>
int main()
{
        char string[100], word;
        int i = 0, count = 0;

        printf("Enter the string:-\n");
        scanf("%[^\n]", string);

        printf("\nThe String is:-\n");
        printf("%s", string);

	printf("\nWhich character to find?\n");
	fgetc(stdin);
	scanf("%c", &word);

        while(string[i])
        {
		if(string[i] == word)
		{
			printf("%c is found at %d position\n", word, i+1);
			count++;
		}
		i++;
	}

        printf("\n%c is found %d times\n", word, count);

        return 0;
}

