#include<stdio.h>
int main()
{
        char string[100];
        int i, pos;

        printf("Enter any word:-\n");
        scanf("%[^\n]", string);

        printf("\nThe word is:-\n");
        printf("%s", string);

        printf("\nAt which position you want to delete?\n");
        scanf("%d", &pos);

        for(i=pos-1; string[i] != '\0'; ++i)
                string[i] = string[i+1];

        printf("\n---NEW WORD---\n");
        printf("%s\n", string);

        return 0;
}

