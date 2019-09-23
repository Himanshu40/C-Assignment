#include<stdio.h>
int main()
{
	char alph;

	printf("Enter an alphabet: ");
	scanf("%c", &alph);

	(alph >= 'A' && alph <= 'Z')?(alph += 32):(alph -= 32);

	printf("---After Conversion---\n");
	printf("\t%c\n", alph);

	return 0;
}
