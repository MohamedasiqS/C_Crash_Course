#include<stdio.h>
int main()
{
    int i,sum =0,n;
    for(i=0;i<10;i++)
    {
        printf("Enter number\n");
        scanf("%d",&n);
        if(n<0)
         break;
         sum += n;
    }
        printf("Sum = %d\n",sum);
}
