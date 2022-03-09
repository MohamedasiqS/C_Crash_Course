#include<stdio.h>
#define SIZE 5

int one(int*);
int two(int*);
int three(int*);
int four(int*);
int five(int*);


int one(int *one_arg)
{
	int i;
	printf("Function One\n");
	for(i=0;i<5;i++)
	   printf("%d ",one_arg[i]);
	return 0;
}

int two(int *two_arg)
{
        int i;
        printf("Function Two\n");
        for(i=0;i<5;i++)
           printf("%d ",two_arg[i]);
        return 0;
}

int three(int *three_arg)
{
        int i;
        printf("Function Three\n");
        for(i=0;i<5;i++)
           printf("%d ",three_arg[i]);
        return 0;
}

int four(int *four_arg)
{
   	int i;
        printf("Function Four\n");
        for(i=0;i<5;i++)
           printf("%d ",four_arg[i]);
        return 0;
}

int five(int* five_arg)
{
        int i;
        printf("Function Five\n");
        for(i=0;i<5;i++)
           printf("%d ",five_arg[i]);
        return 0;
}
int main()
{	
	int (*fp[SIZE]) (int*) = {one,two,three,four,five};

	int i,arr[5] = {10,20,30,40,50};

	for(i=0;i<SIZE;i++)
	{
	  fp[i](arr);
	  puts("\n");
	}

	return 0;
}
