#include<stdio.h>
#define SIZE 10
void one(int,int);
void two(int,int);
void three(int,int);
void four(int,int);
void five(int,int);
void six(int,int);
void seven(int,int);
void eight(int,int);
void nine(int,int);
void ten(int,int);

void one(int a,int b)
{
	printf("%d%d - I am Function one - address : %p",a,b,one);
}

void two(int a,int b)
{
        printf("%d%d - I am Function two - address : %p",a,b,two);
}

void three(int a,int b)
{
        printf("%d%d - I am Function three - address : %p",a,b,three);
}

void four(int a,int b)
{
        printf("%d%d - I am Function four - address : %p",a,b,four);
}

void five(int a,int b)
{
        printf("%d%d - I am Function five - address : %p",a,b,five);
}

void six(int a,int b)
{
        printf("%d%d - I am Function six - address : %p",a,b,six);
}

void seven(int a,int b)
{
        printf("%d%d - I am Function seven - address : %p",a,b,seven);
}

void eight(int a,int b)
{
        printf("%d%d - I am Function eight - address : %p",a,b,eight);
}

void nine(int a,int b)
{
        printf("%d%d - I am Function nine - address : %p",a,b,nine);
}

void ten(int a,int b)
{
        printf("%d%d - I am Function ten - address : %p",a,b,ten);
}


int main()
{
	
	void (*fp[10]) (int,int) = {one,two,three,four,five,six,seven,eight,nine,ten};

	int i;
	for(i=0;i<10;i++)
	{
	  fp[i](0,i+1);
	  puts("\n");
	}

	return 0;
}
