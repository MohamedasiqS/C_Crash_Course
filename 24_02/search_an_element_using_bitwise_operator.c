#include<stdio.h>
#define check (arr[i]&key) == key
#define SIZE 6
int main(void)
{
	int key,arr[SIZE]={10,20,30,40,50,60},i=0,flag=0;
	printf("Enter Key Element\n");
	scanf("%d",&key);
	while(i<SIZE)
	{
		if(check)
		{
			printf("Element Found :%d\n",arr[i]);
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
		printf("Element Not found\n");
	return 0;
}
