#include<stdio.h>
int main()
{
        int x=255,n,c;
        printf("Enter nth bit for set the bit\n");
        scanf("%d",&n);
	printf("Enter cth bit for clear the bit\n");
        scanf("%d",&c);
        x = x | (0x1<<n);
                printf("%d th bit is set\n",n);
                printf("value of x=%d\n",x);
	x = x & ~(0x1<<c);
                printf("%d th bit is cleared\n",c);
                printf("value of x=%d\n",x);
        return 0;
}

