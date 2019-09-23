#include<stdio.h>
int main()
{
	int i, sum = 0;

	for(i=1; i<=30; ++i)
		sum += i;

	printf("Sum of first 30 +ve integers = %d\n", sum);

	return 0;
}
