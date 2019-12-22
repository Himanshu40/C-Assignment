#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int size;

typedef struct student
{
  int rollNo;
  long int contactNo;
  char gender;
  char name[20];
  char address[50];
}student;

void insert(student *S)
{
  FILE *fp;
  int i;

  fp = fopen("studentdata.txt", "w");

  if(!fp)
  {
    fprintf(stderr, "File creation error\n");
		exit(0);
  }

  printf("How many students records you want to input?\n");
  scanf("%d", &size);
  fgetc(stdin);

  printf("\n\t---STUDENT RECORD---\n");
  for(i=0; i<size; ++i)
  {
    printf("---STUDENT %d---\n", i+1);
    printf("ROLL NO: ");
    scanf("%d", &(S + i)->rollNo);
    fgetc(stdin);
    printf("NAME: ");
    scanf("%s", (S + i)->name);
    fgetc(stdin);
    printf("GENDER(M/F): ");
    scanf("%c", &(S + i)->gender);
    fgetc(stdin);
    printf("ADDRESS: ");
    scanf("%s", (S + i)->address);
    fgetc(stdin);
    printf("CONTACT NO.: ");
    scanf("%ld", &(S + i)->contactNo);
    fgetc(stdin);
    printf("\n");
    fprintf(fp, "%d %s %c %s %ld\n", (S + i)->rollNo,
                                     (S + i)->name,
                                     (S + i)->gender,
                                     (S + i)->address,
                                     (S + i)->contactNo);
  }
  fclose(fp);
}

void display(student *S)
{
  FILE *fp;
  int i;

  fp = fopen("studentdata.txt", "r");

  if(!fp)
  {
    fprintf(stderr, "File reading error\n");
		exit(0);
  }

  printf("\n\t---DISPLAY OF STUDENT RECORD\n");
  for(i=0; i<size; ++i)
  {
    fscanf(fp, "%d %s %c %s %ld\n", &(S + i)->rollNo,
                                    (S + i)->name,
                                    &(S + i)->gender,
                                    (S + i)->address,
                                    &(S + i)->contactNo);
    printf("---STUDENT %d---\n", i+1);
    fprintf(stdout, "ROLL NO: %d\nNAME: %s\nGENDER: %c\nADDRESS: %s\nCONTACT NO.: %ld\n", (S + i)->rollNo,
                                                                                          (S + i)->name,
                                                                                          (S + i)->gender,
                                                                                          (S + i)->address,
                                                                                          (S + i)->contactNo);
    printf("\n");
  }
}

void count(student *S)
{
  FILE *fp;
  int i, countF = 0;

  fp = fopen("studentdata.txt", "r");

  if(!fp)
  {
    fprintf(stderr, "File reading error\n");
		exit(0);
  }

  for(i=0; i<size; ++i)
  {
    fscanf(fp, "%*d %*s %c", &(S + i)->gender);
    if(toupper((S + i)->gender) == 'F')
      countF++;
  }

  printf("\nNumber of Female students are %d\n", countF);
  fclose(fp);
}

int main()
{
  student S[50];

  system("clear");

  insert(S);
  display(S);
  count(S);

  return 0;
}
