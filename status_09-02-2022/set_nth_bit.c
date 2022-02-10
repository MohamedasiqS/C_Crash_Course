#include<stdio.h>
int main()
{
	int x=32,n;
	printf("Enter nth bit\n");
	scanf("%d",&n);
	x = x | (0x1<<n);
		printf("%d th bit is set\n",n);
		printf("value of x=%d\n",x);
	return 0;
}
	
