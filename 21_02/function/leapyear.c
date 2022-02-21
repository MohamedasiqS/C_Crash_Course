#include<stdio.h>
int leapyear(int p)
{
	if((p%4==0&&p%100!=0)||(p%400==0))
		return 1;
	return 0;
}
int main()
{
int year;
printf("enter year\n");
scanf("%d",&year);
leapyear(year)?printf("%d is leap year",year):printf("%d is non leap year",year);
return 0;
}

