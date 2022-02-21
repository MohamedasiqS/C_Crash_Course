#include<stdio.h>
int main()
{
	int **ptr=0,a=10,*ptr1=&a;
	ptr=&ptr1;
	printf("value of A=%d\n",**ptr);
	printf("value of ptr1 = %p\n",*ptr);
	printf("value of ptr = %p\n",ptr);
	return 0;
}
