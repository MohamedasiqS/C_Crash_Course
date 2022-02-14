#include<stdio.h>
int main()
{
	int ch;
	FILE *fp = fopen("file1.txt","r");
	FILE *fp1 = fopen("file2.txt","w+");
	if(fp==0)
	{
		perror("file not opened\n");
		return -1;
	}
	if(fp1==0)
        {
                perror("file not opened\n");
                return -1;
        }
	while((ch=fgetc(fp))!=EOF)
		fputc(ch,fp1);
	fclose(fp);
	return 0;
}
