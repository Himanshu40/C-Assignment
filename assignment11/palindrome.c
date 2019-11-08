#include<stdio.h>
int main()
{
        char string[100];
        int i = 0, len = 0, check = 1;

        printf("Enter the string:-\n");
        scanf("%[^\n]", string);

        printf("\nThe String is:-\n");
        printf("%s", string);

        while(string[len])
                len++; 

        while(i != (len/2))
        {
                if(string[i] != string[len-1-i])
		{
			check = 0;
			break;
		}
                i++;
        }

        if(check == 1)
		printf("\nThe string is palindrome\n");
	else
		printf("\nThe string is not palindrome\n");

        return 0;
}

