#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
typedef struct heap           // Structure definition
{
	int data;
}heap;

void printdata(heap *array_arg)        //printdata() to display the data
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
	for(i=0;i<5;i++)   //Loop For assign the Data to each structure array
	{
	     array[i].data = i+1;	
	}
        void (*fp)();      //function pointer declaration
	fp = printdata;    //Assign Function name to function pointer (fp)
	fp(array);	   //funtion call
	free(array);
	return 0;
}

