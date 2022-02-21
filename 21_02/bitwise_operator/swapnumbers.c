#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a value:\n");
	scanf("%d",&a);
	printf("enter b value:\n");
	scanf("%d",&b);
	a= a^b;
	b= a^b;
	a= a^b;
	printf("swap value:a: %db: %d\n",a,b);
	return 0;
}

