#include<stdio.h>
#include<stdlib.h>

void insert()
{
  FILE *fp;
  char ch;

  fp = fopen("words.txt", "w");

  if(!fp)
  {
    fprintf(stderr, "File creation error\n");
  	exit(0);
  }

  printf("Enter something: (Press Ctrl + D to exit shell)\n");
	while((ch=fgetc(stdin)) != EOF)
		fputc(ch, fp);

  fclose(fp);
}

void displayReverse()
{
  FILE *fp;
  char ch;

  fp = fopen("words.txt", "r");

  if(!fp)
  {
    fprintf(stderr, "File reading error\n");
  	exit(0);
  }

  printf("\n\t---TO DISPLAY EACH LINE IN REVERSE ORDER---\n")
  fseek(fp, -1L, SEEK_END);
  while(ftell(fp) >= 0)
  {
    ch = fgetc(fp);
    printf("%c", ch);
    if(fseek(fp, -2L, SEEK_CUR) == -1)
      break;
  }
  printf("\n");
  fclose(fp);
}

int main()
{
  system("clear");

  insert();
  displayReverse();

  return 0;
}
