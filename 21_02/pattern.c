#include <stdio.h>

int main()
{
    int i,j,n=5;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
           printf(" ");
          j=0;
          while(j<=i)
          {
              printf("%c",'A'+j);
              j++;
          }
          printf("\n");
    }

    return 0;
}

