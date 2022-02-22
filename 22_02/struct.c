#include<stdio.h>
#include<stdlib.h>
typedef struct heap
{
	char c[5];
	struct heap *p;
}heap;
int main(void)
{
	int i;
	heap *ptr;
	heap stack;
	#if 0
	ptr = (heap*)malloc(sizeof(heap));
	for(i=0;i<5;i++)
		ptr->c[i]='A'+i;
	for(i=0;i<5;i++)
		printf("%2c",ptr->c[i]);
	printf("\n");
	free(ptr);
	#endif
	for(i=0;i<5;i++)
                stack.c[i]='A'+i;
        for(i=0;i<5;i++)
                printf("%2c",stack.c[i]);
	return 0;
}
