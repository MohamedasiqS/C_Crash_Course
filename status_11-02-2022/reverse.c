#include<stdio.h>
int reverse(int i)
{
	static int a=0;
	if(i==0)
		return a;
	a = a*10+(i%10);
	i=i/10;
	return reverse(i);
}
int main()
{
	int i = 12345;
	printf("Reverse : %d\n",reverse(i));
	return 0;
}
