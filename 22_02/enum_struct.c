#include<stdio.h>
typedef struct size
{
	enum data
	{
		one,two,three,four,five,six
	}v;
}size;
int main(void)
{
	printf("Size of struct :%ld\n",sizeof(size));
	return 0;
}
