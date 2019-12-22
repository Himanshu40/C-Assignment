#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char ch;

	system("clear");

	if(argc != 3)
	{
		fprintf(stderr, "Insufficent arguments !!!\n");
		return 0;
	}

	fp1 = fopen(argv[1], "w");

	if(!fp1)
	{
		fprintf(stderr, "Source file creation error\n");
		return 0;
	}

	printf("Enter something: (Press Ctrl + D to exit shell)\n");
	while((ch=fgetc(stdin)) != EOF)
		fputc(ch, fp1);

	fclose(fp1);

	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2], "w");

	if(!fp2)
	{
		fprintf(stderr, "Destination file creation error\n");
		return 0;
	}

	while((ch=fgetc(fp1)) != EOF)
		fputc(ch, fp2);

	fclose(fp2);
	fclose(fp1);

	printf("\nCOPYING from %s to %s......DONE\n", argv[1], argv[2]);

	return 0;
}
