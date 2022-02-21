#include<stdio.h>
int main()
{
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	if(year%400==0)
		printf("%d year is leap year with millenium\n",year);
	else if(year%4==0)
			printf("%d is leap year with not millenium year\n",year);
	else
		printf("%d year is not leap year with millenium\n",year);
	
		return 0;
}

