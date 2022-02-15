#include<stdio.h>
int main()
{
	char ch,ch1;
	int a;
	FILE *fp = fopen("file1.txt","r");
	FILE *fp1 = fopen("file2.txt","r");
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
	ch = fgetc(fp);
	ch1= fgetc(fp1);
	while(ch!=EOF && ch1!=EOF || ch!=EOF || ch1!=EOF)
	{
		if(ch!=ch1)
                {
                         a=0;
			 break;
                }

	ch = fgetc(fp);
        ch1= fgetc(fp1);
	}
	if(a==0)
		printf("File 1 & File 2 not same\n");
	else
		printf("File 1 & File 2 is same\n");
	fclose(fp);
	return 0;
}
