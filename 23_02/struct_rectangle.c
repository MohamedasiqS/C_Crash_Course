#include<stdio.h>
#define fname(len,wid)  len*wid

typedef struct rectangle
{
	unsigned int len;
	unsigned int wid;
	unsigned int area;
}rect;

void swap(rect *a)
{
	int temp;
	temp = a->len;
	a->len = a->wid;
	a->wid = temp;
}
int main(void)
{
	rect a = {10,20};
	void (*fptr) (rect*);
	printf("Before Swap\n");
	printf("a.len =%d ,a.wid = %d\n",a.len,a.wid);
	fptr= swap;
	fptr(&a);
	printf("After Swap\n");
        printf("a.len =%d ,a.wid = %d\n",a.len,a.wid);
	a.area = fname(a.wid,a.len);
	printf("\nArea of Rectangle :%d\n",a.area);
	return 0;
}
