#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void my_printf(int **ptr)
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("ptr + %d = %d\n",i,*(*ptr+i));
	return ;
}
void my_scanf(int **ptr)
{
	int i;
	for(i=0;i<SIZE;i++)
                scanf("%d",*ptr+i);
	return ;
}
int main(void)
{
	int *ptr=0;
	ptr=(int *)malloc(SIZE*sizeof(int));
	my_scanf(&ptr);
	my_printf(&ptr);
	free(ptr);
	ptr=NULL;
	return 0;
}
