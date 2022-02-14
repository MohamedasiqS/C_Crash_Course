#include<stdio.h>
int main()
{
	char ch;
	FILE *fp=fopen("append.txt","a");
	if(fp==0)
	{
		perror("File not oipening\n");
		return -1;
	}
	while((ch=getchar())!=EOF)
		fputc(ch,fp);
	fclose(fp);
	return 0;
}
