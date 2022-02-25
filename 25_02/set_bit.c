#include<stdio.h>
int main(void)
{       
        int x=6,bit;
        printf("Enter bit position\n");
        scanf("%d",&bit);
        if(!(x & (0x1<<bit)))
        { 
		x = x | (0x1<<bit);
		printf("After bit set,the value is %d\n",x);
        }
        else            
                printf("%d bit position is already set\n",bit);
        return 0;
}     
