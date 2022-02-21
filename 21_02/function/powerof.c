#include<stdio.h>
int power(int p,int q)
{
  int i,a=1;
  for(i=1;i<=q;i++)
  {
	  a=a*p;
  }
  return a;
}
int main()
{
	int a,b;
	printf("enter a and b value:\n");
	scanf("%d%d",&a,&b);
	printf("power of a is %d",power(a,b));
	return 0;
}

