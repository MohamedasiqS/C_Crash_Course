#include<stdio.h>
int factorial(int n)
{
	static int fact=1;
	if(n==1)
	   return fact;
	fact*=n;
	factorial(--n);
}
int main(void)
{
	int n=5;
	printf("Fact : %d\n",factorial(n));
	return 0;
}
