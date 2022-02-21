#include<stdio.h>
int main(void)
{
	char str[15] = "HaVe a NIce dAY";
	int i,count=0;
	for(i=0;*(str+i)!='\0';i++)
	{
		if(*(str+i)>=65 && *(str+i)<=90)
		{
			*(str+i) += 32;
			count++;
		}
		
		else if(*(str+i)>=97 && *(str+i)<=122)
		{   
			*(str+i) -= 32;
			 count++;

		}
	}
	printf("String :%s\n",str);
	printf("No of constants :%d\n",count);
	i=0;
	count =0;
	while(*(str+i)!='\0')
	{
		if(*(str+i)=='a' || *(str+i) =='A')
			count++;
		i++;
	}
	printf("No of letter 'a' is %d\n",count);
	return 0;
}
