#include<stdio.h>
void swap(int a,int *b)
{
	int temp;
	temp = a;
	a =*b;
	*b = temp;
	return ;
}
int main(void)
{
	int a=10,b=90;
	printf("Before swap , A=%d ,B=%d\n",a,b);
	swap(a,&b);
	printf("After swap A=%d , B =%d\n",a,b);
	return 0;
}
