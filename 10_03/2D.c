#include<stdio.h>
#define ROW 2
#define COLUMN 3
int main()
{
	int a[ROW][COLUMN] = {10,20,30,40,50,60};	//This is not recommended because difficult to read

//                        0th row        1st row
	int b[ROW][COLUMN] = {{100,200,300},{400,500,600}};	//It's better read

	printf("a[0][1] = %d\n",a[0][1]);	//Accessing 0th row in 1st column of a[2][3]

	printf("a[1][0] = %d\n",a[1][0]);       //Accessing 1st row in 1st column of a[2][3]

	int i,j;

	printf("Array- a \n");

	for(i=0;i<ROW;i++)   
	{
	   for(j=0;j<COLUMN;j++)
	   {
	       printf("Address of a[%d][%d] = %p, Value of a[%d][%d] = %d\n",i,j,&a[i][j],i,j,a[i][j]);	   
	   }
	   printf("\n");
	}

	printf("Base address of a is %p , address of a[0][0] is %p\n",a,&a[0][0]);

	for(i=0;i<ROW;i++)
        {
             printf("Address of a[%d] = %p",i,&a[i]);
        }

	printf("Enter data for array - b\n");

	for(i=0;i<ROW;i++)
        {
           for(j=0;j<COLUMN;j++)
           {
               scanf("%d",&b[i][j]);
           }
        }

	for(i=0;i<ROW;i++)
        {
           for(j=0;j<COLUMN;j++)
           {
               printf(" Address of b[%d][%d] = %p, Value of b[%d][%d] = %d\n ",i,j,&b[i][j],i,j,b[i][j]);
           }
           printf("\n");
        }
        printf("Base address of b is %p , address of b[0][0] is %p\n",b,&b[0][0]);

	return 0;
}


