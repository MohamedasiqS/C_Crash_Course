#include<stdio.h>
void reverse_order(int n)
{
	if(n==0)
	   return ;
	printf("%d\n",n);
	reverse_order(--n);
}
int main(void)
{
	int n=10;
	reverse_order(n);
	return 0;
}
