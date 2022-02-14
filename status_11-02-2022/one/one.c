#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp = fopen("hello.txt","w+");
	if(fp==0)
	{
		perror("File not opening\n");
		return -1;
	}
	else
	{
		
		while((ch=getchar())!=EOF)
		{
			fputc(ch,fp);
		}
	}
	fclose(fp);
	return 0;
}
