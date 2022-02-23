#include<stdio.h>
#define dt unsigned int

int main(void)
{
	dt *ret=0;
	//Method-1  It work but show warning
	printf("size of ret is %ld\n",++ret);

	//Method-2 Here char* used because we get byte to byte
	printf("Size of ret is %ld",(char*)(ret+1)-(char*)(ret));
	return 0;
}

