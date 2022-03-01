#include<stdio.h>
int main(void)
{
   int i,j,n=5;
   for(i=0;i<n;i++)
   { 
      for(j=0;j<n;j++)
      {
	if(i>j)
	   printf(" ");	  
	else
	printf("%c",'A'+i);    
      }
      printf("\n");
   }
   return 0;
}
