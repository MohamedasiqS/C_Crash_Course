#include<stdio.h>
void sign()
{
	signed int a = 2147483648;
	signed char b = 128;
	short signed int c = 32768;
	long signed int d = 9223372036854775808;
	printf("int = %d\n",a);
	printf("Char = %d\n",b);
	printf("Short signed int = %d\n",c);
	printf("Long signed int = %ld\n",d);
	return ;
}
void unsign()
{
	unsigned int a = 4294967295;
	unsigned char b = 255;
	short unsigned int c = 65536;
	long unsigned int d = 18446744073709551615;
	printf("int = %d\n",a);
        printf("Char = %d\n",b);
        printf("Short unsigned int = %d\n",c);
        printf("Long unsigned int = %ld\n",d);
	return ;
}
int main()
{
	sign();
	unsign();
	return 0;
}
