#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;

	printf("Enter a number:- ");
	scanf("%d", &x);

	if(x)
		exit(0);
	else
		printf("So the number is ZERO\n");

	return 0;
}
