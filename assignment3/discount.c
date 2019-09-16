/*
 *PROGRAM : To compute the discount and prepare an invoice report of a cloth store 
 *FILE : discount.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 14/09/2019
 */

#include<stdio.h>
int main()
{
	float millAmount, handAmount, totalAmount, disAmount, millDis, handDis;

	printf("Enter Mill Cloth Amount: ");
	scanf("%f", &millAmount);
	printf("Enter Handloom Cloth Amount: ");
	scanf("%f", &handAmount);

	totalAmount = millAmount + handAmount;

	printf("\n\t    INVOICE\n\n");
	printf("TYPE\t\t\tAMOUNT\n\n");
	printf("Mill Cloth\t\t%.2f\n", millAmount);
	printf("Handloom Cloth\t\t%.2f\n", handAmount);
	printf("\nTOTAL AMOUNT\t\t%.2f\n", totalAmount);

	if(totalAmount <= 100)
	{
		millDis = 0;
		handDis = 5.0;
		handAmount -= handAmount*(handDis/100);
		disAmount = millAmount + handAmount;
	}
	else if((totalAmount >= 101) && (totalAmount <= 200))
	{
		millDis = 5.0;
		handDis = 7.5;
		millAmount -= millAmount*(millDis/100);
		handAmount -= handAmount*(handDis/100);
		disAmount = millAmount + disAmount;
	}
	else if((totalAmount >= 201) && (totalAmount <= 300))
	{
		millDis = 7.5;
		handDis = 10;
    		millAmount -= millAmount*(millDis/100);
    		handAmount -= handAmount*(handDis/100);
		disAmount = millAmount + handAmount;
	}
	else
	{
		millDis = 10.0;
		handDis = 15.0;
		millAmount -= millAmount*(millDis/100);
		handAmount -= handAmount*(handDis/100);
		disAmount = millAmount + handAmount;
	}

	printf("\n\tAPPLYING DISCOUNT\n");
	printf("\nTYPE\t\tDISCOUNT\tAMOUNT\n\n");
	printf("Mill Cloth\t  %.1f\t\t%.2f\n", millDis, millAmount);
	printf("Handloom Cloth\t  %.1f\t\t%.2f\n", handDis, handAmount);
	printf("\nTOTAL AMOUNT WITH DISCOUNT\t%.2f\n", disAmount);

	return 0;
}
