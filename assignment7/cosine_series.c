/*
 *PROGRAM : To display sum of cosine series
 *FILE : cosine_series.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 27/09/2019
 */

#include<stdio.h>
#include<math.h>
int main()
{
	double num, fact, sum = 1;
	int n, i, temp, sign = -1, j=2;

	printf("Enter the value of X in radians for cosine series: ");
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
	
	printf("\nSum of cosine series up to %d terms for %.4lf is %.4lf\n", n, num, sum);

	return 0;

}
