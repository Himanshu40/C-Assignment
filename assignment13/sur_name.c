#include<stdio.h>
int main()
{
	char name[30];
	int i, j, space = 0;

	printf("Enter your name:-\n");
	scanf("%[^\n]", name);

	printf("\nYour name is %s\n", name);

	printf("\n---SUR NAME---\n");
	for(i=0; name[i] != '\0'; ++i)
	{
		if(name[i] == ' ')
			space++;
		if(space == 2)
		{
			for(j=i+1; name[j] != '\0'; ++j)
				printf("%c", name[j]);
			break;
		}
	}

	printf("\n");

	return 0;
}
