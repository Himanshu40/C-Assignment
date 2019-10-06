/*
 *PROGRAM : To print the first 30 +ve odd integers
 *FILE : firstOdd30.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : 20/09/2019
 */

#include<stdio.h>
int main()
{
        int i;

        for(i=1;i<=59;++i)
                if(i%2 != 0)
                        printf("%d ", i);

        printf("\n");

        return 0;
}

