#include<stdio.h>
#define SIZE 30
void mymemcpy(char *des,const char* src,unsigned int size)
{
	int i=0;
	while(i<size)
	{
		*(des+i) = *(src+i);
		i++;
	}
	*(des+i)='\0';
	return ;
}
int main(void)
{
	char src[SIZE] = "Good Morning have a nice day",des[SIZE];
	unsigned int size=18;
	void (*fptr)(char*,char*,unsigned int);
	fptr=mymemcpy;
	fptr(des,src,size);
	printf("Output: %s\n",des);
	return 0;
}
