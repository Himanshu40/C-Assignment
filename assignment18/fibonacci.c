#include<stdio.h>

int fibonacci(int num)
{
	if(num <= 1)
		return num;
	return(fibonacci(num-1) + fibonacci(num-2));
}

int main()
{
	int num, i;

	printf("Enter the number of terms in the series: ");
	scanf("%d", &num);

	printf("\n---FIBONACCI SERIES UP TO %d TERMS---\n", num);
	for(i=0; i<num; ++i)
		printf("%d ", fibonacci(i));
	printf("\n");

	return 0;
}
