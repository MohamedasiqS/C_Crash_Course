#include<stdio.h>
#define SIZE 3

char* one();
char* two();
char* three();

char* one()
{
	static char arr[6] = {'a','b','c','d','e','\0'};
	return arr;
}

char* two()
{
        static char arr[6] = {'a','b','c','d','e','\0'};
        return arr;
}

char* three()
{
        static char arr[6] = {'a','b','c','d','e','\0'};
        return arr;
}


int main()
{	
	char* (*fp[SIZE]) () = {one,two,three};
	int i;
	char *ret=NULL;

	for(i=0;i<SIZE;i++)
	{
	  ret = fp[i]();
	  printf("%d- %s",i+1,ret);
	  puts("\n");
	}

	return 0;
}
