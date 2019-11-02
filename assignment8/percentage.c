#include<stdio.h>
int main()
{
	int stud, marks[30][4], per[30] = {0}, i, j, temp;

	START:
	printf("How many number of students mark you want to input?\n");
	scanf("%d", &stud);

	if(stud > 30)
	{
		printf("\nRange of students is greater than 30. RETRY!!!\n");
		goto START;
	}
	else
	{	
		printf("\n---Input the marks of the students---\n");
		for(i=0; i<stud; ++i)
		{
			printf("\nSTUDENT NO. %d\n", i+1);
			for(j=0; j<4; ++j)
			{
				printf("SUBJECT NO. %d MARKS = ", j+1);
				scanf("%d", &marks[i][j]);
			}
		}

		for(i=0; i<stud; ++i)
		{
			for(j=0; j<4; ++j)
				per[i] += marks[i][j];
			per[i] = (float)per[i]/400*100;
		}

		printf("\n---MARKS & PERCENTAGE OF STUDENTS---\n");
		for(i=0; i<stud; ++i)
		{
			printf("\nSTUDENT NO. %d\n", i+1);
			for(j=0; j<4; ++j)
				printf("SUBJECT %d MARKS = %d\n", j+1, marks[i][j]);
			printf("PERCENTAGE = %d\n", per[i]);
		}

		for(i=0; i<stud; ++i) //Sorting percentage in ascending order using insertion sort
		{
			temp = per[i];
			j = i-1;
			while((temp < per[j]) && (j >= 0))
			{
				per[j+1] = per[j];
				j--;
			}
			per[j+1] = temp;
		}
 
		printf("\n---TOP THREE PERCENTAGE SCORERS---\n");
		printf("1. %d%\n", per[stud-1]);
		printf("2. %d%\n", per[stud-2]);
		printf("3. %d%\n", per[stud-3]);
	}	

	return 0;
}
