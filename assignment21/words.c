#include<stdio.h>
#include<string.h>
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

void displayWords()
{
  FILE *fp;
  char ch[2], word[15] = {0};

  ch[1] = '\0';
  fp = fopen("words.txt", "r");

  if(!fp)
  {
    fprintf(stderr, "File reading error\n");
  	exit(0);
  }

  printf("\n\t---DISPLAY WORDS WHOSE LENGTH IS MORE THAN 4---\n");
  while(1)
  {
    ch[0] = fgetc(fp);
    if(ch[0] == EOF)
      break;
    if(ch[0] != ' ')
      if(ch[0] != '\n')
        strcat(word, ch);
    if(ch[0] == ' ' || ch[0] == '\n')
    {
      if(strlen(word) > 4)
        printf("%s\n", word);
      memset(word, 0, 15*sizeof(char));
    }
  }

  fclose(fp);
}

int main()
{
  system("clear");

  insert();
  displayWords();

  return 0;
}
