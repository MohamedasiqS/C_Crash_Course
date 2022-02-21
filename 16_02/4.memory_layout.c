#include<stdio.h>
int a,b=10;
static int c,d=90;
int main()
{
	int e,f=100;
	{
		int a=1000;
	}
	static int g;
	{
		register int h =80;
	}
	return 0;
}
