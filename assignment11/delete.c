/*
 *PROGRAM: To delete a char at specific position
 *FILE: delete.c
 *CREATED BY: Himanshu Sekhar Nayak
 *DATED: 28/10/2019
 */

#include<stdio.h>
int main()
{
        char string[100];
        int i, pos;

        printf("Enter the string:-\n");
        scanf("%[^\n]", string);

        printf("\nThe string is:-\n");
        printf("%s", string);

        printf("\nAt which position you want to delete?\n");
        scanf("%d", &pos);

        for(i=pos-1; string[i] != '\0'; ++i)
                string[i] = string[i+1];

        printf("\n---NEW STRING---\n");
        printf("%s\n", string);

        return 0;
}

