#include<stdio.h>
#include<math.h>
int main()
{
	double num, fact, sum = 0;
	int n, i, temp, sign = -1, j=1;

	printf("Enter the value of X in radians for sine series: ");
	scanf("%lf", &num);
	printf("Enter the term: ");
	scanf("%d", &n);

	for(i=1; i<=n; ++i)
	{
		fact = 1;
		temp = j;
		while(temp)
		{
			fact *= temp;
			temp--;
		}
		sum += (pow(num, j)/fact)*sign;
		sign *= -1;
		j += 2;
	}
	
	printf("\nSum of sine series up to %d terms for %.4lf is %.4lf\n", n, num, sum);

	return 0;
}
