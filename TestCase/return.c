#include<stdio.h>
int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if(num)
		return 1;
	else 
		printf("ZERO\n");

	printf("END\n");

	return 0; 
}
