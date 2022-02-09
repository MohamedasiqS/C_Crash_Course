#include<stdio.h>
int main()
{
	int x=10,y=20;
	printf("Before Swap : %d %d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("After Swap : %d %d\n",x,y);
	return 0;
}
