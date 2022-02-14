#include<stdio.h>
int main()
{
	int x=147483638;
	if(x & 0x80000000)
		printf("MSB bit is set\n");
	else
		printf("MSB bit is not set\n");
	return 0;
}
