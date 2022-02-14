#include<stdio.h>
int sum(int arr[])
{
	static int s,i=4;
	if(i==-1)
		return s;
	s +=arr[i];
	i--;
	return sum(arr);
}
int main()
{
	int arr[] = {10,20,30,40,50};
	printf("Sum:%d\n",sum(arr));
	return 0;
}
