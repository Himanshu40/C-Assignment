#include<stdio.h>
int main()
{
	int rem, word[20], j, i = 0, count = 0;
	long int num, temp;
	
	START:
	printf("Enter a number: ");
	scanf("%ld", &num);

	temp = num;
	
	while(temp)
	{
		count++;
		temp /= 10;
	}

	if(count > 20)
	{
		printf("Range of the digits is more than 20. RETRY!!!");
		goto START;
	}
	else
	{
		temp = num;

		while(temp)
		{
			rem = temp % 10;
			word[i++] = rem;
			temp /= 10;
		}

		for(j=i-1; j >= 0; --j)
                	switch(word[j])
                	{
                        	case 0: printf("ZERO ");
                                	break;
                        	case 1: printf("ONE ");
                                	break;
                        	case 2: printf("TWO ");
                                	break;
                        	case 3: printf("THREE ");
                                	break;
                        	case 4: printf("FOUR ");
                                	break;
                        	case 5: printf("FIVE ");
                                	break;
                        	case 6: printf("SIX ");
                                	break;
                        	case 7: printf("SEVEN ");
                                	break;
                        	case 8: printf("EIGHT ");
                                	break;
                        	case 9: printf("NINE ");
                                	break;
                        	default: printf("INVALID");
                	}

		printf("\n");		
	}

	return 0;
}
