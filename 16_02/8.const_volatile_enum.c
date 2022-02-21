#include<stdio.h>
void constant1()
{
	const int i = 90,j=800,*ptr3=0,k=70;
	int *const ptr2=&j;
	int *ptr1 = &i;
	*ptr1 =80;
	printf("Const variable %d\n",i);
	
	*ptr2=100;
	printf("Constant pointer %d\n",*ptr2);

	ptr3 = &k;
	
	printf("Pointer to constant %d\n",*ptr3);
	return ;
}
int main()
{
	enum weeks{mon=16,tue,wed,thur,fri,sat};
	enum weeks day;
	day =mon;
	printf("%d\n",day);
	constant1();
	return 0;
}
