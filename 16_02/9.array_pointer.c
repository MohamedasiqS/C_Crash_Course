#include<stdio.h>
int main()
{
	char arr[] ="HeLloWorLd",*ptr=arr;
	
	for(;*ptr!='\0';ptr++)
	{
		if(*ptr >=65 && *ptr<=90)
			*ptr += 32;
		else
			*ptr -=32;
	}
	printf("%s",ptr-10);
	return 0;
}
