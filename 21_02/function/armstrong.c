/*Write a function cubesum( ) that accepts an integer and returns the sum of the cubes of individual
digits of that number. Use this program to print Armstrong numbers in a given range */

#include<stdio.h>
int armstrong(int n)
{
	int temp = n,rem,sum=0;

	while(temp!=0)
	{
		rem = temp%10;
		sum += rem*rem*rem;
		temp /= 10;
	}
	if(sum == n)
		return 0;
	else
		return -1;
}
int main(void)
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);

	if(armstrong(n)==0)
		printf("Given Number is Armstrong number\n");
	else
		printf("Given Number is not Armstrong number\n");
	return 0;
}
