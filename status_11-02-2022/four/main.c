#include<stdio.h>
int main()
{
	int ch,character=0,word=0,line=0;
	FILE *fp = fopen("count.txt","r");
	if(fp==0)
	{
		perror("File not opening\n");
		return -1;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		//if(ch != ' '||ch != '\n')
			character++;
		if(ch == ' '||ch == '\n')
		{
			word++;
		}
		if(ch == '\n')
			line++;
	}
	fclose(fp);
	printf("No of character : %d\n",character);
	printf("No of words : %d\n",word);
	printf("No of lines : %d\n",line);
	return 0;
}
