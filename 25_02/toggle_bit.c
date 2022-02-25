#include<stdio.h>
int main(void)
{       
        int x=6,bit;
        printf("Enter bit position\n");
        scanf("%d",&bit);
      	x = x ^ (0x1<<bit);
	printf("After toggled bit,the value is %d\n",x);
        return 0;
}     
