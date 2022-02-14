#include<stdio.h>
union lebe
{
	char a[2];
	int x;
}var;
int main()
{
	var.x=1;
	if(var.a[0] == 1)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
	return 0;
}
