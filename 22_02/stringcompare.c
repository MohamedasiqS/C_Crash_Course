#include<stdio.h>
#define SIZE 10
int mystrcmp(const char *str1,const char *str2)
{
	int i=0;
	while((*(str1+i)==*(str2+i)) && *(str1+i) != '\0' && *(str2+i)!='\0')
	{
		i++;
	}
	if (0 < (*(str1+i)-*(str2+i)))
		return -1;
	else if (0 > (*(str1+i)-*(str2+i)))
		return 1;
	else
		return 0;
}
int main(void)
{
	char str1[SIZE]="Hello",str2[SIZE]="Hello";
	int (*fptr)(const char*,const char*);
	int ret;
	fptr=mystrcmp;
	ret=fptr(str1,str2);
	if(ret>0)
		printf("String 1 is greater than string 2\n");
	else if(ret<0)
		printf("String 1 is lesser than string 2\n");
	else if(ret==0)
		printf("String 1 and String 2 is same\n");
	return 0;
}

