#include<stdio.h>
int main()
{
	int num;
	
	printf("WELCOME\n");
	printf("Enter an integer: ");
	while(scanf("%d", &num) != 1)
	{
		printf("Sucessful\n");
	}
	printf("Value of num = %d\n", num);
	return 0;
}
