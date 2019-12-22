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
	while((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);

	fclose(fp);
}

void overwrite(const char *filename)
{
	FILE *fp;
	int i, posn, buffer = 0;
	char ch;

	fp = fopen(filename, "r+");

	if(!fp)
	{
		fprintf(stderr, "File opening error\n");
		return ;
	}

	printf("Enter the position to overwite towards 10 bytes: ");
	//while((buffer = getchar()) != '\n' && buffer != EOF);
	scanf("%d", &posn);

	printf("\nEnter the chars to overwrite:-\n");
	if(fseek(fp, posn, SEEK_SET) != -1)
	{
		for(i=1; i<=10; ++i)
		{
			ch = fgetc(stdin);
			fputc(ch, fp);
		}
		printf("\nOVERWRITING DONE\n");
	}

	fclose(fp);
}

int main(int argc, char *argv[])
{
	int posn;

	system("clear");

	if(argc != 2)
	{
		fprintf(stderr, "Insufficent arguments !!!\n");
		return 0;
	}

	insert(argv[1]);
	overwrite(argv[1]);

	return 0;
}
