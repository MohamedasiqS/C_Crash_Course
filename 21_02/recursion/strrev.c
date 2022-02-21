#include<stdio.h>
char str[20];
void swap(int i,int j)
{
	char temp;
	if(i<j)
         return ;
	temp = str[j];
	str[j]=str[i];
	str[i]=temp;
        swap(--i,++j);
}
int main()
{
	int i,j=0;
	printf("Enter string\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++);
	--i;
	swap(i,j);
	printf("%s",str);
	return 0;
}

