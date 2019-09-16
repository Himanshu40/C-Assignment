/*
 *PROGRAM : To check if the candidate is eligible for the professional course or not 
 *FILE : admission.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 14/09/2019
 */

#include<stdio.h>
int main()
{
	int math, phy, chem, total;

	printf("Enter Maths marks = ");
	scanf("%d", &math);
	printf("Enter Physics marks = ");
	scanf("%d", &phy);
	printf("Enter Chemistry marks = ");
	scanf("%d", &chem);

	printf("\nYour Maths marks = %d\n", math);
	printf("Your Physics marks = %d\n", phy);
	printf("Your Chmemistry marks = %d\n", chem);

	total = phy+chem+math;

	printf("Total marks = %d\n", total);

	if((math >= 60) && (phy >= 50) && (chem >= 40))
	{	if((total >= 200) || ((math+phy) >= 150))
			printf("\nYou are eligible for professional course\n");
		else
			printf("\nYou are not eligible for professional course\n");
	}
	else
		printf("\nYou are not eligble for professional course\n");

	return 0;
}
