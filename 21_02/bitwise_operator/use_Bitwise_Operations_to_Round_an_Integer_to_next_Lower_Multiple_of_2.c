/*use Bitwise Operations to Round(floor of) an Integer to next Lower Multiple of 2*/

#include<stdio.h>
int main(void)
{
	unsigned int j=0x80000000;
	int n;
	printf("Enter N value\n");
	scanf("%d",&n);
	if(n>=0)
	{
	while(!(n & 0x80000000))
	{
		n = n<<1;
		j=j>>1;
	}
	printf("Round of an integer:%i\n",j);
	}
	else
	{
	n = -1*n;
	while(!(n & 0x80000000))
        {
                n = n<<1;
                j=j>>1;
        }
	j=j<<1;
	j = -1*j;
        printf("Round of an integer:%i\n",j);
        }
	return 0;
}
