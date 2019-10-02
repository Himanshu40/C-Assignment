/*
 *PROGRAM : To display and evaluate for 5 basic arithmetic operations using switch case 
 *FILE : operation.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 14/09/2019
 */

#include<stdio.h>
int main()
{
  	int num1, num2;
  	char op;

  	printf("Enter 1st operand: ");
  	scanf("%d", &num1);
  	printf("Enter 2nd operand: ");
  	scanf("%d", &num2);
  	printf("Enter a operator(+, -, *, /, %): ");
	//op = getchar(); it is used only for formatting buffer
  	scanf("%c", &op);

	switch(op)
	{
		case '+': printf("\n%d + %d = %d\n", num1, num2, (num1 + num2));
			  break;
		case '-': printf("\n%d + %d = %d\n", num1, num2, (num1 - num2));
			  break;
		case '*': printf("\n%d * %d = %d\n", num1, num2, (num1 * num2));
			  break;
		case '/': printf("\n%d / %d = %.3f\n", num1, num2, ((float)num1 / num2));
			  break;
		case '%': printf("\n%d % %d = %d\n", num1, num2, (num1 % num2));
		 	  break;
		default:  printf("\nInvalid operator\n");

	}

  	return 0;
}
