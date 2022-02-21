#include<stdio.h>
int prime(int a)
{
	int i;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		 break;	
	}
	if(i==a)
		return 1;
	else
		return 0;
}
void isprime(int p,int q)
{
	int i;
  for(i=p;i<=q;i++)
	  prime(i)?printf("%d is prime\n",i):'\0';
}
int main()
{
  int a,b;
  printf("Enter range value:\n");
  scanf("%d%d",&a,&b);
  isprime(a,b);
}

