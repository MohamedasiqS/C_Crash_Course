#include<stdio.h>
int main()
{
	int x=3;
	if(x & 0x01)
		printf("LSB bit is set\n");
	else
		printf("LSB bit is not set\n");
	return 0;
}
