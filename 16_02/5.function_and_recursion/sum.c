#include<stdio.h>
void sum1(int);
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
	printf("\n Recursion\n");
	printf("%d\n",sum(n));
	printf("\n Function \n");
	sum1(n);
	return 0;
}
void sum1(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
		sum += i;
	printf("Sum =%d\n",sum);
	return ;
}
