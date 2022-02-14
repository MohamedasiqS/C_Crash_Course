#include<stdio.h>
int sum(FILE *fp)
{
	static int s=0;
	int ch;
	if(ch=fgetc(fp)==feof(fp))
		return s;
	if(ch=fgetc(fp)!=feof(fp))
		s+=ch;
	return sum(fp);
}
int main()
{
	FILE *fp;
	fp = fopen("sum","r");
	if(fp==0)
	{
		perror("File not opened\n");
		return -1;
	}
	printf("Sum :%d\n",sum(fp));
	fclose(fp);
	return 0;
}
