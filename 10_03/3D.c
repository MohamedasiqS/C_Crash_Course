#include<stdio.h>
#define TABLE 2
#define ROW 2
#define COLUMN 3 
int main()
{
	int a[TABLE][ROW][COLUMN] = {10,20,30,40,50,60,70,80,90,100,110,120};	//This is not recommended because difficult to read

//                        0th row        1st row
	int b[TABLE][ROW][COLUMN] = {{100,200,300,400,500,600},{700,800,900,1000,1100,1200}};	//It's better read

	printf("a[0][0][0] = %d\n",a[0][0][0]);	//Accessing 0th table 0th row in 1st column of a[2][3]

	printf("a[1][1][0] = %d\n",a[1][1][0]);       //Accessing 1st tablel 1st row in 1st column of a[2][3]

	int i,j,k;

	printf("Array- a \n");

	for(i=0;i<TABLE;i++)  //This Loop for get no .of matrix 
	{
	   for(j=0;j<ROW;j++) //This Loop for get no .of rows for each matrix
	   {
	       for(k=0;k<COLUMN;k++)  //This Loop for get no.of coloumn for each matrix
	       {	       
	       printf("Address of a[%d][%d][%d] = %p, Value of a[%d][%d][%d] = %d\n",i,j,k,&a[i][j][k],i,j,k,a[i][j][k]);	   
	       }
	   }
	   printf("\n");
	}

	printf("Base address of a is %p , address of a[0][0] is %p\n",a,&a[0][0][0]);

	for(i=0;i<TABLE;i++)
        {
             printf("Address of a[%d] = %p",i,&a[i]);
        }

	printf("\n");
 /* It print 3D array of a[2][2][3]*/
	for(i=0;i<TABLE;i++)
        {
           for(j=0;j<ROW;j++)
           {
             for(k=0;k<COLUMN;k++)
             {
               printf("%d ",a[i][j][k]);
             }
	     printf("\n");
           }
           printf("\n");
        }


	printf("Enter data for array - b\n");

	for(i=0;i<TABLE;i++) //This Loop for get no .of matrix 
        {
           for(j=0;j<ROW;j++)  //This Loop for get no .of rows for each matrix
           {
	     for(k=0;k<COLUMN;k++)  //This Loop for get no.of coloumn for each matrix
	       {	     
                scanf("%d",&b[i][j][k]);  
	       }
           }
        }
/*It display the datas of b[2][2][3] */
	for(i=0;i<TABLE;i++)
        {
           for(j=0;j<ROW;j++)
           {
	     for(k=0;k<COLUMN;k++)
	     {	     
               printf(" Address of b[%d][%d][%d] = %p, Value of b[%d][%d][%d] = %d\n ",i,j,k,&b[i][j][k],i,j,k,b[i][j][k]);
	     }
           }
           printf("\n");
        }
        printf("Base address of b is %p , address of b[0][0] is %p\n",b,&b[0][0][0]);

	printf("\n");
	
	for(i=0;i<TABLE;i++)
        {
           for(j=0;j<ROW;j++)
           {
             for(k=0;k<COLUMN;k++)
             {
               printf("%d ",b[i][j][k]);
             }
	     printf("\n");
           }
           printf("\n");
        }

	return 0;
}


