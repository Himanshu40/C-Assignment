#include<stdio.h>
#include<stdlib.h>

void insert(const char *filename)
{
	FILE *fp;
  	char ch;

  	fp = fopen(filename, "w");

  	if(!fp)
  	{
    		fprintf(stderr, "File creation error\n");
  		return ;
  	}

  	printf("Enter something: (Press Ctrl + D to exit shell)\n");
	while((ch=fgetc(stdin)) != EOF)
		fputc(ch, fp);

  	fclose(fp);
}

void displayReverse(const char *filename)
{
  	FILE *fp;
  	char ch;

  	fp = fopen(filename, "r");

  	if(!fp)
  	{
    		fprintf(stderr, "File reading error\n");
  		return ;
  	}

  	printf("\n\t---TO DISPLAY IN REVERSE ORDER---\n");
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

int main(int argc, char *argv[])
{
  	system("clear");

  	if(argc != 2)
  	{
    		fprintf(stderr, "File creation error\n");
    		return 0;
  	}

  	insert(argv[1]);
  	displayReverse(argv[1]);

  	return 0;
}
