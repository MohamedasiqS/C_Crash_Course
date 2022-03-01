#include<stdio.h>
int main(void)
{
   int i,j,set=35,n=(set/2)+1;
   for(i=0;i<n;i++)
   { 
      for(j=0;j<n;j++)
      {
	if(i>j)
	   printf("   ");	  
	else
	printf("%-3d",set);
      }
      printf("\n");
      set = set -2;
   }
   return 0;
}
