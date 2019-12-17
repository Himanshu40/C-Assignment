#include<stdio.h>
#include<string.h>

int range;

typedef struct employee
{
	char emp_name[30];
	int emp_id;
	char emp_dept[10];
	float emp_sal;
}EMP;

void insert(EMP *E)
{
	int i;

	printf("\nHow many number of employees?\n");
	scanf("%d", &range);
	fgetc(stdin);

	for(i=0; i<range; ++i)
	{
		printf("\n---EMP %d---\n", i+1);
		printf("EMP ID: ");
		scanf("%d", &(E + i)->emp_id);
		fgetc(stdin);
		printf("NAME: ");
		scanf("%[^\n]s", (E + i)->emp_name);
		fgetc(stdin);
		printf("DEPT. NAME: ");
		scanf("%[^\n]s", (E + i)->emp_dept);
		printf("BASIC SALARY: ");
		scanf("%f", &(E + i)->emp_sal);
	}
}

void display(EMP *E)
{
	int i;

	printf("\n\t---DISPLAY---\n");
	for(i=0; i<range; ++i)
	{
		printf("\n---EMP %d---\n", i+1);
		printf("EMP ID: %d\n", (E + i)->emp_id);
		printf("NAME: %s\n", (E + i)->emp_name);
		printf("DEPT. NAME: %s\n", (E + i)->emp_dept);
		printf("BASIC SALARY: %.2f\n", (E + i)->emp_sal);
	}
}

void search_deleteEmpID(EMP *E)
{
	int i, j, search, check = 0;

	printf("\nEnter the EMP ID to delete: ");
	scanf("%d", &search);

	for(i=0; i<range; ++i)
		if(search == ((E + i)->emp_id))
		{
			check = 1;
			for(j=i; j<range; ++j)
				*(E + j) = *(E + (j + 1));
			range--;
		}

	if(check == 1)
		display(E);
	else
		printf("\nEMP ID not found in the record!!!\n");
}

void search_deleteDeptName(EMP *E)
{
	int i, j, check = 0;
	char search[10];

	printf("\nEnter the DEPT. NAME to delete: ");
	scanf("%s", &search);

	for(i=0; i<range; ++i)
		if(strcasecmp((E + i)->emp_dept, search) == 0)
		{
			check = 1;
			for(j=i; j<range; ++j)
				*(E + j) = *(E + (j + 1));
			range--;
		}

	if(check == 1)
		display(E);
	else
		printf("\nDEPT. NAME not found in the record!!!\n");
}

void IncreamentSal(EMP *E)
{
	int i;

	for(i=0; i<range; ++i)
		if(strcasecmp((E + i)->emp_dept, "finance") == 0)
			(E + i)->emp_sal += (0.15*((E + i)->emp_sal));

	display(E);

}

void sortEmpId(EMP *E)
{
	int i, j;
	EMP temp;

	for(i=0; i<(range-1); ++i)
		for(j=0; j<(range-i-1); ++j)
			if((E + j)->emp_id > (E + (j + 1))->emp_id)
			{
				temp = *(E + j);
				*(E + j)= *(E + (j + 1));
				*(E + (j + 1)) = temp;
			}
	display(E);
}

void sortEmpName(EMP *E)
{
	int i, j;
	EMP temp;

	for(i=0; i<(range-1); ++i)
		for(j=0; j<(range-i-1); ++j)
			if((E + j)->emp_name[0] > (E + (j + 1))->emp_name[0])
			{
				temp = *(E + j);
				*(E + j)= *(E + (j + 1));
				*(E + (j + 1)) = temp;
			}
	display(E);
}

int main()
{
	EMP E[20];
	int choice;

	insert(E);

	START:
	printf("\n\t---OPERATIONS---\n");
	printf("1.Search and delete records related to emp id\n");
	printf("2.Search and delete records related to dept. name\n");
	printf("3.Increament basic salary by 15%% of Finance dept\n");
	printf("4.Sort the records according to employee id\n");
	printf("5.Sort the records according to employee name\n");
	printf("6.Display record\n");
	printf("\nEnter your choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:	 search_deleteEmpID(E);
			 break;
		case 2:	 search_deleteDeptName(E);
			 break;
		case 3:  IncreamentSal(E);
			 break;
		case 4:  sortEmpId(E);
			 break;
		case 5:  sortEmpName(E);
			 break;
		case 6:  display(E);
			 break;
		default: printf("\nINVALID CHOICE\n");
			 goto START;
	}

	return 0;
}
