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

  fp = fopen("studentdata.dat", "wb");

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
    fwrite((S + i), sizeof(student), 1, fp);
  }
  fclose(fp);
}

void display(student *S)
{
  FILE *fp;
  int i;

  fp = fopen("studentdata.dat", "rb");

  if(!fp)
  {
    fprintf(stderr, "File read error\n");
		exit(0);
  }

  printf("\n\t---DISPLAY OF STUDENT RECORD\n");
  for(i=0; i<size; ++i)
  {
    fread((S + i), sizeof(student), 1, fp);
    printf("---STUDENT %d---\n", i+1);
    fprintf(stdout, "ROLL NO: %d\nNAME: %s\nGENDER: %c\nADDRESS: %s\nCONTACT NO.: %ld\n", (S + i)->rollNo,
                                                                                          (S + i)->name,
                                                                                          (S + i)->gender,
                                                                                          (S + i)->address,
                                                                                          (S + i)->contactNo);
    printf("\n");
  }

  fclose(fp);
}

int main()
{
  student S[50];

  system("clear");

  insert(S);
  display(S);

  return 0;
}
