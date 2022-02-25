#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void my_printf(int **ptr)
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("ptr + %d = %d\n",i,*(*ptr+i));
	printf("\n");
	return ;
}
void my_scanf(int **ptr)
{
	int i;
	for(i=0;i<SIZE;i++)
                scanf("%d",*ptr+i);
	return ;
}
void sort(int **ptr)
{
	int i,j,temp;
	for(i=0;i<SIZE-1;i++)
	{
	   for(j=0;j<SIZE-i-1;j++)
	   {
		   if(*(*ptr+j) > *(*ptr+j+1))
		    {
		      temp      = *(*ptr+j);
		      *(*ptr+j)   = *(*ptr+j+1);
		      *(*ptr+j+1) = temp;
		    } 
	   }
	}
	return ;
}
int main(void)
{
	int *ptr=0;
	ptr=(int *)malloc(SIZE*sizeof(int));
	my_scanf(&ptr);
	my_printf(&ptr);
	sort(&ptr);
	my_printf(&ptr);
	free(ptr);
	ptr=NULL;
	return 0;
}
