#include<stdio.h>
int main()
{
	char ch;
	FILE *fp = fopen("file.txt","r+");
	if(fp==0)
	{
		perror("File not opening\n");
		return -1;
	}
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
		putchar(ch);
	fclose(fp);
	return 0;
}
