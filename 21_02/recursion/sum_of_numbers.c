#include<stdio.h>
int sum(int n)
{
	if(n==0)
		return n;
	return n+sum(n-1);
}
int main()
{
	int n;
	printf("Enter n value\n");
	scanf("%d",&n);
	printf("%d\n",sum(n));
	return 0;
}
