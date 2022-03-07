#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
typedef struct heap
{
	int data;
}heap;

void printdata(heap *array_arg)
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("Data :%d\n",array_arg[i].data);
	return ;
}
int main(void)
{
	heap *array=NULL;
	array = (heap*)malloc(SIZE*sizeof(heap));
	int i;
	for(i=0;i<5;i++)
	{
	     array[i].data = i+1;	
	}
        void (*fp)();
	fp = printdata;
	fp(array);
	free(array);
	return 0;
}

