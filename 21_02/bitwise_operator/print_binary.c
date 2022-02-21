#include<stdio.h>
int main()
{
    int n,j=8;
    printf("Enter nvalue\n");
    scanf("%d",&n);
    while(j)
    {
        if(n&0x080)
          printf("1");
          else
          printf("0");
          n=n<<1;
          --j;
    }
    return 0;
}

