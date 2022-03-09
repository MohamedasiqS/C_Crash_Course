#include<stdio.h>

/*    This Function removes the leading zeros in given binary number.  */

int rem_leading_zeros(int *x)
{
   int count = 32;
   while(!(*x & 0x80000000))//This Loop for removing leading zeros in given binary number
   {
     *x = (*x)<<1;
     count--;
   }
   return count;
}

/*  This Function gives binary value of given decimal value.  */

void binaryformat(int *x,int *arr,int count_arg)
{
   int j=0;
   while(j<count_arg)//This Loop condition checks get binary value upto value of count(bits).
   {
       if((*x) & 0x80000000)//If true assign value '1' else assign '0' in next statement
       {
             arr[j]=1;
       }
       else
       {
             arr[j]=0;
       }
       *x = (*x)<<1;
       j++;
   }
   return ;
}

int find_same_bits(int x,int y)//This function returns value that user given two numbers have same bit or not
{
	int x_count,y_count;
	int i,j,n=0,arr1[10],arr2[10];

	x_count = rem_leading_zeros(&x);//No of bits in x value
	y_count = rem_leading_zeros(&y);//No of bits in y value

	binaryformat(&x,arr1,x_count);//Binary value of x
	binaryformat(&y,arr2,y_count);//Binary value of y

	i=j=0;
	while((i < x_count) && (j < y_count))//compare the binary value which is same or not
	{
		if(arr1[i] == arr2[j])
		{
			n++;
		}
		i++;
		j++;
	}
	return n;	
}
int main(void)
{
	int x =4,y=5,i,ret;
	ret = find_same_bits(x,y);
	if(ret==0)
		printf("All bits are same\n");
	else
		printf("%d bit are same in given two numbers\n",ret);
	return 0;
}

