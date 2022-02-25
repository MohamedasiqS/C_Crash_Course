#include<stdio.h>
int main(void)
{
	int x=10,y=50;
	printf("Before swap , X = %d , Y = %d\n",x,y);
	x=x^y;//x=30
	y=x^y;//y=20
	x=x^y;//x=10
	printf("After Swap . X = %d , Y = %d\n",x,y);
	return 0;
}

