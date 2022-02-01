#include<stdio.h>
float area(int);
float circumference(int r)
{
	float per;
	per = 2*3.14*r;
	return per;
}
int main()
{
	int r;
	printf("Enter value for radius\n");
	scanf("%d",&r);
	printf("Area of circle : %f\n",area(r));
	printf("Circumference of circle :%f\n",circumference(r));
	return 0;
}
float area(int r)
{
	int area;
	area = r*r*3.14;
	return area;
}

