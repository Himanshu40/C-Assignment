/*
 *PROGRAM : To check an integer as TECH number or not
 *FILE : techNum.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 23/09/2019
 */

#include<stdio.h>
int main()
{
        int i, num, rem, techN, temp, count = 0, lastHalf = 0, place = 1;

        printf("Enter a number = ");
        scanf("%d", &num);
	
	temp = num;

	while(temp)
	{
		temp /= 10;
		count++;
	}

        if(count%2 == 0)
        {
		temp = num;
		i = 1;
		while(i <= (count/2))
		{
			rem = temp%10;
			lastHalf += rem*place;
			place *= 10;
			temp /= 10;
			i++;	
		}
		techN = (temp + lastHalf)*(temp + lastHalf);
		if(num == techN)
			printf("%d is a tech number\n", num);
		else
			printf("%d is not a tech number\n", num);
        }
        else
                printf("You have entered odd number of digits\n");

        return 0;
}

