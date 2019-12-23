#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
  	char ch, string[30] = {0};
	int i, m = 0;

 	fp = fopen("words.txt", "r");

  	if(!fp)
  	{
    		fprintf(stderr, "File reading error\n");
  		exit(0);
  	}

  	printf("\n\t---TO DISPLAY EACH LINE IN REVERSE ORDER---\n");
  	
	while((ch=fgetc(fp)) != EOF)
	{
		if(ch != '\n')
			string[m++] = ch;
		if(ch == '\n')
		{
			for(i=m-1; i>=0; --i)
				printf("%c", string[i]);
			printf("\n");
			memset(string, 0, 30*sizeof(char));
			m = 0;
		}
	}

  	fclose(fp);
}

int main()
{
  	system("clear");

  	insert();
  	displayReverse();

  	return 0;
}
