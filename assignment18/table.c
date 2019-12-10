#include<stdio.h>

void mul_table(int num, int i)
{
	printf("%d * %d = %d\n", num, i, num*i);
	if(i != 10)
		return mul_table(num, i+1);
}

int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("\n---MULTIPLICATION TABLE OF %d---\n", num);
	mul_table(num, 1);

	return 0;
}
