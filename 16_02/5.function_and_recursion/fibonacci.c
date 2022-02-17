#include<stdio.h>
void fibb (int);
int fib(int n)
{
	if((n==0)||(n==1))
		return n;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("\nfunction\n");
	fibb(n);
	int i;
	printf("\nRecursion function\n");
	for(i=0;i<n;i++)
	printf("%d",fib(i));
	return 0;
}


void fibb(int n)
{
int a=0,b=1,c,i;

for(i=1;i<=n;i++)
{
	c=a+b;
printf("%d ",c);
a=b;
b=c;
}
}

