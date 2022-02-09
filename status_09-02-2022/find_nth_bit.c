#include<stdio.h>
int main()
{
	int x=32,n;
	printf("Enter nth bit\n");
	scanf("%d",&n);
	if(x & 0x1<<n)
		printf("%d th bit is set\n",n);
	else
		printf("%d th bit is not set\n",n);
	return 0;
}
	
