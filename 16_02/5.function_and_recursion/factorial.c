#include<stdio.h>
void fact1(int);
int fact(int n)
{
	if(n==0)
		return 1;
	return n*fact(n-1);
}
int main()
{
	int n;
	printf("Enter n value\n");
	scanf("%d",&n);
	printf("\n recursion\n");
	printf("%d",fact(n));
	printf("\nfunction\n");
	fact1(n);
	return 0;
}
void fact1(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
		fact*=i;
	printf("Factorial :%d\n",fact);
	return ;
}
